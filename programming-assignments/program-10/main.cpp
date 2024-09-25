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


  cout << "Enter File Name: ";
  cin >> filename;
  cout << "Enter encrypt or decrypt: ";
  cin >> command;

  if (command != "encrypt" && command != "decrypt") {
    cout << "Error: Bad Command.\n";
    return 1;
  }

  inputFile.open(filename);
  if (!inputFile.is_open()) {
    cout << "Error: File did NOT open.\n";
    return 1;
  }

  outputFile.open("output.txt");
  if (!outputFile.is_open()) {
    cout << "Error: Failed to open output file.\n";
    return 1;
  }



  char c;
  char newC;
  while (inputFile.get(c)) {
    if (command == "encrypt") {
      newC = c + 3;
    } else {
      newC = c - 3;
    }

    switch (toupper(newC)) {
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

  cout << "Frequency of vowels:" << endl;
  cout << "   A     " << aCount << endl;
  cout << "   E     " << eCount << endl;
  cout << "   I     " << iCount << endl;
  cout << "   O     " << oCount << endl;
  cout << "   U     " << uCount << endl;
  cout << "   Y     " << yCount << endl;

  outputFile.close();
  inputFile.close();

  return 0;
}
