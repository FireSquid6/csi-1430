/*
 * Author: Jonathan Deiss
 * Assignment Title: Matrix Class
 * Assignment Description: Matrix operations
 * Due Date: 11/15/2024
 * Date Created: 11/13/2024
 * Date Last Modified: 11/13/2024
 */


#include "matrix.h"
#include <iostream>

matrix_t::matrix_t() {
  row = 1;
  col = 1;

  for (int currentRow = 0; currentRow < row; currentRow++) {
    for (int currentCol = 0; currentCol < col; currentCol++) {
      data[currentRow][currentCol] = 0;
    }
  }
}

matrix_t::matrix_t(int r, int c) {
  row = r;
  col = c;

  for (int currentRow = 0; currentRow < row; currentRow++) {
    for (int currentCol = 0; currentCol < col; currentCol++) {
      data[currentRow][currentCol] = 0;
    }
  }
}


void matrix_t::setCol(int c) {
  col = c;
}


void matrix_t::setRow(int r) {
  row = r;
}


void matrix_t::setValue(int r, int c, double val) {
  data[r][c] = val;
}

int matrix_t::getRow() const {
  return row;
}

int matrix_t::getCol() const {
  return col;
}

double matrix_t::getValue(int r, int c) const {
  return data[r][c];
}


matrix_t matrix_t::add(const matrix_t& other) const {
  int rows = max(row, other.getRow());
  int cols = max(col, other.getCol());

  matrix_t matrix = matrix_t(rows, cols);


  for (int r = 0; r < MAX_SIZE; r++) {
    for (int c = 0; c < MAX_SIZE; c++) {
      double v1 = getValue(r, c);
      double v2 = other.getValue(r, c);

      double sum = v1 + v2;

      matrix.setValue(r, c, sum);
    }
  }

  return matrix;
}

matrix_t matrix_t::subtract(const matrix_t& other) const {
  int rows = max(row, other.getRow());
  int cols = max(col, other.getCol());

  matrix_t matrix = matrix_t(rows, cols);


  for (int r = 0; r < MAX_SIZE; r++) {
    for (int c = 0; c < MAX_SIZE; c++) {
      double v1 = getValue(r, c);
      double v2 = other.getValue(r, c);

      double difference = v1 - v2;

      matrix.setValue(r, c, difference);
    }
  }

  return matrix;
}

matrix_t matrix_t::multiply(const matrix_t& other) const {
  int n = col;
  int rows = row;
  int cols = other.col;
  matrix_t matrix = matrix_t(row, other.col);

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      int sum = 0;

      for (int i = 0; i < n; i++) {
        sum += getValue(r, i) * other.getValue(i, c);
      }

      matrix.setValue(r, c, sum);
    }
  }

  return matrix;
}

double matrix_t::determinant() const {
  double n = row;
  double det = 0;
  
  if (n == 1) {
    det = getValue(0, 0);
  }
  else if (n == 2) {
    det += getValue(0, 0) * getValue(1, 1);
    det -= getValue(0, 1) * getValue(1, 0);
  }
  else {
    for (int i = 0; i < n; i++) {
      det += getValue(0, i) * getCofactor(0, i);
    }
  }

  return det;
}


void matrix_t::display(ostream& o) const {
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++) {
      stringstream ss;
      ss << getValue(r, c);
      string str = ss.str();
      while (str.length() < 10) {
        str = " " + str;
      }
      o << str;
    }
    o << endl;
  }
}


matrix_t matrix_t::operator+(const matrix_t& other) const {
  return add(other);
}

matrix_t matrix_t::operator-(const matrix_t& other) const {
  return subtract(other);
}

matrix_t matrix_t::operator*(const matrix_t& other) const {
  return multiply(other);
}

double* matrix_t::operator[](int r) {
  int c = 0;

  while (getValue(r, c) != 0) {
    c += 1;
  }

  return &data[r][c];
}


matrix_t matrix_t::getMinor(int cutRow, int cutCol) const {
  matrix_t matrix = matrix_t(row - 1, col - 1);
  
  for (int r = 0; r < row; r++) {
    if (r != cutRow) {
      for (int c = 0; c < col; c++) {
        if (c != col) {
          double value = getValue(r, c);
          matrix.setValue(r, c, value);
        }
      }
    }
  }

  return matrix;
}

double matrix_t::getCofactor(int cutRow, int cutCol) const {
  matrix_t minor = getMinor(cutRow, cutCol);
  int sign = ((cutRow + cutCol) % 2 == 0) ? 1 : -1;
  return sign * minor.determinant();
}
