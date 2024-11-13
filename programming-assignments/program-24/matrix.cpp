/*
 * Author: Jonathan Deiss
 * Assignment Title: Matrix Class
 * Assignment Description: Matrix operations
 * Due Date: 11/15/2024
 * Date Created: 11/13/2024
 * Date Last Modified: 11/13/2024
 */


#include "matrix.h"


matrix_t::matrix_t() {
  row = 1;
  col = 1;
}

matrix_t::matrix_t(int r, int c) {
  row = r;
  col = c;
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
