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
  string fileName;
  string mode;
  bool flag = true;
  char c;
  fstream inFile;
  fstream outFile;
  string output = "";

  int aCount = 0;
  int oCount = 0;
  int uCount = 0;
  int iCount = 0;
  int eCount = 0;
  int yCount = 0;
    
  // Input:
  cout << "Enter File Name: ";
  cin >> fileName;
  cout << fileName << endl;
  cout << "Enter encrypt or decrypt: ";
  cin >> mode;
  cout << mode << endl;
    
  // Process:
  inFile.open(fileName);

  if (!inFile.is_open()) {
    cout << "Error: File did NOT open.";
    flag = false;
  }

  if (mode != "encrypt" && mode != "decrypt") {
    cout << "Error: Bad Command.";
    flag = false;
  }

  outFile.open("output");

  if (!outFile.is_open()) {
    cout << "Error: Output file did NOT open.";
    flag = false;
  }


  if (flag) {
    while (inFile.get(c)) {
      switch (toupper(c)) {
        case 'A': {
          aCount += 1;
          break;
        }
        case 'E': {
          eCount += 1;
          break;
        }
        case 'I': {
          iCount += 1;
          break;
        }
        case 'O': {
          oCount += 1;
          break;
        }
        case 'U': {
          uCount += 1;
          break;
        }
        case 'Y': {
          yCount += 1;
          break;
        }
      }
    }

    if (mode == "encrypt") {
      cout << (c + 3);
      output.push_back(c + 3);
    }
    else {
      output.push_back(c - 3);
    }

    // Output
    cout << output << endl;
    outFile << output << endl;


    cout << "Letter Frequency" << endl;
    cout << "  A    " << aCount << endl;
    cout << "  E    " << eCount << endl;
    cout << "  I    " << iCount << endl;
    cout << "  O    " << oCount << endl;
    cout << "  U    " << uCount << endl;
    cout << "  Y    " << yCount << endl;
  }

  inFile.close();
  outFile.close();
  // Assumptions:

  return 0;
}
