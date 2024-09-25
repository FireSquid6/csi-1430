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
#include <sstream>

using namespace std;
int main() {
  // Data Abstraction:
  string filename;
  char c;
  ifstream inFile;
  ofstream outFile;
  stringstream outString;
  bool flag = false;

  // Input:
  cout << "Enter the file name:";
  cin >> filename;

  // Process:
  inFile.open(filename); 
  outFile.open("output.txt");
  if (!inFile.is_open()) {
    // she wants us to use this stupid flag system instead of returning early
    // idk why
    flag = true;
  } else {
    while (inFile.get(c)) {
      if (c == 'e' || c == 'E') {
        c = '3';
      }
      
      outString << c;
    }
    inFile.close();
    outFile << outString.str();
    outFile.close();

  }

  // Output:
  if (flag) {
    cout << "Error: File did NOT open." << endl;
  } else {
    cout << outString.str() << endl;
  }

  // Assumptions:

  return 0;
}
