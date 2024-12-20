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

// description: converts an integer to a string with spaces
// return: string
// pre: num is an integer
// post: returns a string with the integer and spaces
string numToString(int num) {
  string str = to_string(num);
  if (str.length() == 1) {
    str += "  ";
  } 
  else {
    str += " ";
  }
  return str;
}

int main() {
  // Data Abstraction:
  vector<int> sizes;
  int sizeInput;
  bool flag = true;
  
  // Input:
  while (flag == true) {
    cin >> sizeInput;
    if (sizeInput != 0) {
      sizes.push_back(sizeInput);
    } 
    else {
      flag = false;
    }
  }

  // Loop
  for (unsigned int k = 0; k < sizes.size(); k++) {
    // Data Abstraction:
    int size = sizes[k];
    int matrix[size][size];
    int maximum;

    // Process
    maximum = size / 2 - 1;
      
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
        cout << numToString(matrix[i][j]);
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
