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
  string filename;

  bool continueLoop = true;
  string command;
  int x;
  int y;

  int startX;
  int startY;
  int endX;
  int endY;

  // dummy var used to skip the first two lines
  string dummy;
  
    
  // Input:
  do {
    cout << "Enter the file name:" << endl;
    cin >> filename;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File did NOT open." << endl;
    }
  } while (!inFile.is_open());
    
  // Process:
  getline(inFile, dummy);
  getline(inFile, dummy);

  cout << "Hello world!";
  while (continueLoop) {
    inFile >> command;
    inFile >> x;
    inFile >> y;
    cout << command;
    
    if (command == "START") {
      startX = x;
      startY = y;
    } else if (command == "END") {
      endX = x;
      endY = y;
      continueLoop = false;
    }
  }
    
  // Output:
  cout << "Start: (" << startX << ", " << startY << ")" << endl;
  cout << "End: (" << endX << ", " << endY << ")" << endl;
    
  // Assumptions:

  return 0;
}
