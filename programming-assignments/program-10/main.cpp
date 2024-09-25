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

using namespace std;

int main() {
  string filename;
  string command;
  int aCount = 0;
  int eCount = 0;
  int iCount = 0;
  int oCount = 0;
  int uCount = 0;
  int yCount = 0;
  ifstream inputFile;
  ofstream outputFile;
  char c;
  char newC;

  bool flag = true;

  cout << "Enter File Name: ";
  cin >> filename;
  cout << "Enter encrypt or decrypt: ";
  cin >> command;

  if (command != "encrypt" && command != "decrypt") {
    cout << "Error: Bad Command.\n";
    flag = false;
  }

  inputFile.open(filename);
  if (!inputFile.is_open()) {
    cout << "Error: File did NOT open.\n";
    flag = false;
  }

  outputFile.open("output.txt");
  if (!outputFile.is_open()) {
    cout << "Error: Failed to open output file.\n";
    flag = false;
  }

  if (flag) {

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

      cout << newC;
      outputFile << newC;
    }
    cout << endl;
    cout << "Frequency of vowels:" << endl;
    cout << "   A     " << aCount << endl;
    cout << "   E     " << eCount << endl;
    cout << "   I     " << iCount << endl;
    cout << "   O     " << oCount << endl;
    cout << "   U     " << uCount << endl;
    cout << "   Y     " << yCount << endl;
  }

  outputFile.close();
  inputFile.close();

  return 0;
}
