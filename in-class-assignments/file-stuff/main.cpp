/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <fstream>

using namespace std;
int main() {
  // Data Abstraction:
  ifstream inFile;
  string fileName = "file.txt";

  int value;
    
  // Input:
    
  // Process:
  inFile.open(fileName);
  
  while (inFile >> value) {
    cout << value << endl;
  }

  inFile.close();
    
  // Assumptions:

  return 0;
}
