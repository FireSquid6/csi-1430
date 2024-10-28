/*
 * Author: Jonathan Deiss
 * Assignment Title: Pascal's Triangle
 * Assignment Description: Prints pascal's trangle
 * Due Date: 11/01/2024
 * Date Created: 10/28/2024
 * Date Last Modified: 10/28/2024
 */
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
  // Data Abstraction:
  const int WIDTH = 8;
  vector<vector<int>> triangle;
  int numRows = 0;
  int numSpaces;

  // Input:
  cout << "Please Enter The Number of Rows: ";
  cin >> numRows;
  cout << numRows << endl;
    
  // Process:
  triangle.push_back({1});
  triangle.push_back({1, 1});

  // I know I was supposed to use the functions from last week 
  // but I remembered this solution from a previous leetcode
  // problem I did
  for (int i = 3; i <= numRows; i++) {
    vector<int> row;
    for (int j = 0; j < i; j++) {
      row.push_back(0);
    }
    row.at(0) = 1;
    row.at(row.size() - 1) = 1;

    for (int j = 1; j < row.size() - 1; j++) {
      int left = triangle.at(i - 2).at(j - 1);
      int right = triangle.at(i - 2).at(j);
      row.at(j) = left + right;
    }
    triangle.push_back(row);
  }

  numSpaces = ((numRows * WIDTH - 1) + 3) / 2;

    
  // Output:
  for (int i = 0; i < triangle.size(); i++) {
    for (int j = 0; j < numSpaces; j++) {
      cout << " ";
    }

    for (int j = 0; j < triangle.at(i).size(); j++) {
      cout << left << setw(WIDTH) << triangle.at(i).at(j);
    }
    numSpaces -= 4;
    cout << endl;
  }
    
  // Assumptions:

  return 0;
}
