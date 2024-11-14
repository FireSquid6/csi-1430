/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <sstream>
#include "matrix.h"

using namespace std;
int main() {
  // Data Abstraction:
  matrix_t mat = matrix_t(5, 5);

  mat.setValue(3, 3, 1.34);

  *mat[0] = 1;
  *mat[0] = 2;
  *mat[0] = 3;
  *mat[0] = 4;
  *mat[0] = 5;

  *mat[1] = 1;
  *mat[1] = 2;
  *mat[1] = 3;
  *mat[1] = 4;
  *mat[1] = 5;

  *mat[3] = 23.123;
  *mat[3] = 12.1;
  *mat[3] = 21.5;
  *mat[3] = 219.1;
  *mat[3] = 21.1;

  cout << "displaying matrix: " << endl;
  mat.display(cout);
    
  // Input:
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}
