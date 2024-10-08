/*
 * Author: Jonathan Deiss
 * Assignment Title: Program 10
 * Assignment Description: Caesar Cipher
 * Due Date: 09/27/2024
 * Date Created: 09/25/2024
 * Date Last Modified: 09/25/2024
 */
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//************************************************************
// description: Converts an integer to a string with length 5
// return: string
// pre: i is a valid integer
// post: returns a string with 5 spaces and the integer
//************************************************************
string intToSpacedString(int i) {
  string s = to_string(i);

  while (s.length() < 5) {
    s = " " + s;
  }

  return s;
}

int main() {
  // Data Abstraction
  string filename;
  string command;
  stringstream error;
  int aCount = 0;
  int eCount = 0;
  int iCount = 0;
  int oCount = 0;
  int uCount = 0;
  int yCount = 0;
  ifstream inputFile;
  ofstream outputFile;
  stringstream outString;
  char c;
  char newC;
  bool flag = true;

  // Input
  cout << "Enter File Name: ";
  cin >> filename;
  cout << filename << endl;
  cout << "Enter encrypt or decrypt: ";
  cin >> command;
  cout << command << endl;


  // Process
  if (command != "encrypt" && command != "decrypt") {
    error << "Error: Bad command." << endl;
    flag = false;
  }

  inputFile.open(filename);
  if (!inputFile.is_open()) {
    error << "Error: File did NOT open." << endl;
    flag = false;
  }

  outputFile.open("message");
  if (!outputFile.is_open()) {
    error << "Error: Failed to open output file." << endl;
    flag = false;
  }

  if (flag) {
    // Process
    while (inputFile.get(c)) {
      if (command == "encrypt") {
        newC = c + 3;
      } else {
        newC = c - 3;
      }

      switch (toupper(c)) {
      case 'A':
        aCount++;
        break;
      case 'E':
        eCount++;
        break;
      case 'I':
        iCount++;
        break;
      case 'O':
        oCount++;
        break;
      case 'U':
        uCount++;
        break;
      case 'Y':
        yCount++;
        break;
      }

      outString << newC;
      outputFile << newC;
    } 

    // Output
    cout << endl;
    cout << outString.str() << endl;

    cout << endl;
    cout << "Letter Frequency" << endl;
    cout << "   A  " << intToSpacedString(aCount) << endl;
    cout << "   E  " << intToSpacedString(eCount) << endl;
    cout << "   I  " << intToSpacedString(iCount) << endl;
    cout << "   O  " << intToSpacedString(oCount) << endl;
    cout << "   U  " << intToSpacedString(uCount) << endl;
    cout << "   Y  " << intToSpacedString(yCount) << endl;
  } else {
    // Output
    cout << error.str();
  }

  outputFile.close();
  inputFile.close();

  return 0;
}
