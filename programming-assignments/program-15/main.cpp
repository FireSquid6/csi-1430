/*
 * Author: Jonathan Deiss
 * Assignment Title: Square Matrix
 * Assignment Description: Prints a square matrix
 * Due Date: 10/16/2024
 * Date Created: 10/15/2024
 * Date Last Modified: 10/15/2024
 */
#include <iostream>
#include <vector>

using namespace std;
int main() {
  // Data Abstraction:
  int size;
  int maximum;
  
  // Input:
  cin >> size;

  // Matrix Definition (has to happen after input)
  int matrix[size][size];

  // Process
  maximum = size / 2;
    
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      int x = i;
      int y = j;

      if (x > maximum) {
        x = size - x - 1;
      }
      if (y > maximum) {
        y = size - y - 1;
      }

      if (x < y) {
        matrix[i][j] = x + 1;
      } else {
        matrix[i][j] = y + 1;
      }
    }

  }
    
  // Output:
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
