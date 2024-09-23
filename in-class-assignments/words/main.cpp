/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  // Data Abstraction:
  int count = 0;
  ifstream inFile;
  string filename;
  string word;
  char c;

  // Input:
  do {
    cout << "Enter File Name:";
    cin >> filename;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File is not open!" << endl;
    }
  } while (!inFile.is_open());

  // Process:
  while (inFile >> word) {
    c = word.at(0);

    if (c == 'a' || c == 'A') {
      count += 1;
    }
  }

  // Output:
  cout << "Number of Wordsstarting with a or A = " << count << endl;

  // Assumptions:

  return 0;
}
