/*
 * Author: Jonathan Deiss
 * Assignment Title: Matrix Class
 * Assignment Description: Matrix operations
 * Due Date: 11/15/2024
 * Date Created: 11/13/2024
 * Date Last Modified: 11/13/2024
 */
#ifndef MATRIX_H_
#define MATRIX_H_

#include <ostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;
const int WIDTH = 4;

class matrix_t{
private:
	int row, col;
	double data[MAX_SIZE][MAX_SIZE] = {{0}};

public:
  // description: creates a new matrix
  // return: none
  // pre: none
  // post: none
	matrix_t();
  // description: creates a new matrix of row x col
  // return: none
  // pre: two ints exist
  // post: none
	matrix_t(int, int);

  // description: sets the amount of rows in the matrix
  // return: void
  // pre: an integer exists
  // post: the rows is set
	void setRow(int);
  // description: sets the amount of cols in the matrix
  // return: void
  // pre: an integer exists
  // post: the cols is set
	void setCol(int);
  // description: sets a value in the matrix
  // return: void
  // pre: two ints and a double exist
  // post: the value is set
	void setValue(int, int, double);

  // description: gets the rows in a matrix
  // return: int
  // pre: none
  // post: none
	int getRow() const;
  // description: gets the cols in a matrix
  // return: int
  // pre: none
  // post: none
	int getCol() const;
  // description: gets the value at row,col
  // return: double
  // pre: two ints exist
  // post: none
	double getValue(int, int) const;

  // description: displays the matrix
  // return: void
  // pre: an ostream exists
  // post: the ostream has the matrix in it
	void display(ostream&) const;
  // description: ccalculates the determinant
  // return: double
  // pre: none
  // post: none
	double determinant() const;


  // description: adds tw omatrixices
  // return: matrix
  // pre: two matricies exist
  // post: a new matrix is created
	matrix_t add(const matrix_t&) const;
  // description: subtracts two matricies
  // return: matrix
  // pre: two matricies exist
  // post: none
	matrix_t subtract(const matrix_t&) const;
  // description: multiplies two matricies 
  // return: matrix
  // pre: two matricies exist
  // post: none
	matrix_t multiply(const matrix_t&) const;

  // description: adds two matricies
  // return: matrix
  // pre: two matricies exist
  // post: none
	matrix_t operator+(const matrix_t&) const;
  // description: subtracts two matricies
  // return: matrix
  // pre: two matricies exist
  // post: none
	matrix_t operator-(const matrix_t&) const;
  // description: multiplies two matricies 
  // return: matrix
  // pre: two matricies exist
  // post: none
	matrix_t operator*(const matrix_t&) const;
  // description: accesses a value in the matrix
  // return: double*
  // pre: a matrix exists
  // post: a pointer to the double is created
	double*  operator[](int n);

};


#endif /* MATRIX_H_ */
