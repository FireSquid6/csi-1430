/*
 * Author: Jonathan Deiss
 * Assignment Title: Multiplication Table
 * Assignment Description: Prints a multiplication table
 * Due Date: 10/18/2024
 * Date Created: 10/15/2024
 * Date Last Modified: 10/15/2024
 */
#include <iostream>
#include <vector>

using namespace std;

void printDivider(int sections) {
  for (int i = 0; i < sections; i++) {
    cout << "-----|";
  }
  cout << endl;
}

string centerNumberRight(int num) {
  string str = to_string(num);
  str = "  " + str;
  while (str.length() < 6) {
    str += " ";
  }

  return str;
}

string centerNumberLeft(int num) {
  string str = to_string(num);
  str += "  ";

  while (str.length() < 6) {
    str = " " + str;
  }

  return str;
}

string padNumberRight(int num, unsigned int len) {
  string str = to_string(num);
  while (str.length() < len) {
    str += " ";
  }
  return str;
}

vector<int> makeNumberList(int start, int end) {
  vector<int> list;


  if (start < end) {
    for (int i = start; i <= end; i++) {
      list.push_back(i);
    }
  } 
  else {
    for (int i = start; i >= end; i--) {
      list.push_back(i);
    }
  }

  return list;
}

int main() {
  // Data Abstraction:
  int r1;
  int r2;
  int c1;
  int c2;

  int width;
  int height;
  int sections;

  vector<int> top;
  vector<int> side;
    
  // Input:
  cin >> r1;
  cin >> r2;
  cin >> c1;
  cin >> c2;

  // Process:
  sections = c2 - c1 + 2;
  width = r2 - r1 + 1;
  height = c2 - c1 + 1;

  top = makeNumberList(c1, c2);
  side = makeNumberList(r1, r2);

  int matrix[width][height];


  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      matrix[i][j] = top[j] * side[i];
    }
  }
    
  // Output:
  cout << "     ";
  for (unsigned int i = 0; i < top.size(); i++) {
    cout << centerNumberLeft(top.at(i));
  }
  cout << endl;
  printDivider(sections);


  for (unsigned int i = 0; i < side.size(); i++) {
    cout << padNumberRight(side.at(i), 6);

    for (int j = 0; j < height; j++) {
      cout << centerNumberRight(matrix[i][j]);
    }
    cout << endl;
    printDivider(sections);
  }
    
  // Assumptions:

  return 0;
}
