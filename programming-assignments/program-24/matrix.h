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
	matrix_t();
	matrix_t(int, int);

	void setRow(int);
	void setCol(int);
	void setValue(int, int, double);

	int getRow() const;
	int getCol() const;
	double getValue(int, int) const;

	void display(ostream&) const;
	double determinant() const;


	matrix_t add(const matrix_t&) const;
	matrix_t subtract(const matrix_t&) const;
	matrix_t multiply(const matrix_t&) const;

	matrix_t operator+(const matrix_t&) const;
	matrix_t operator-(const matrix_t&) const;
	matrix_t operator*(const matrix_t&) const;
	double*  operator[](int n);

};


#endif /* MATRIX_H_ */
