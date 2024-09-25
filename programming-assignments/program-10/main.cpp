#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string filename, command;
  cout << "Enter File Name: ";
  cin >> filename;
  cout << "Enter encrypt or decrypt: ";
  cin >> command;

  if (command != "encrypt" && command != "decrypt") {
    cout << "Error: Bad Command.\n";
    return 1;
  }

  ifstream file(filename);
  if (!file.is_open()) {
    cout << "Error: File did NOT open.\n";
    return 1;
  }

  ofstream outputFile("output");
  if (!outputFile.is_open()) {
    cout << "Error: Failed to open output file.\n";
    return 1;
  }

  int aCount = 0;
  int eCount = 0;
  int iCount = 0;
  int oCount = 0;
  int uCount = 0;
  int yCount = 0;

  char c;
  char newC;
  while (file.get(c)) {
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

  cout << "Frequency of vowels:\n";
  cout << "   A     " << aCount << "\n";
  cout << "   E     " << eCount << "\n";
  cout << "   I     " << iCount << "\n";
  cout << "   O     " << oCount << "\n";
  cout << "   U     " << uCount << "\n";
  cout << "   Y     " << yCount << "\n";

  return 0;
}
