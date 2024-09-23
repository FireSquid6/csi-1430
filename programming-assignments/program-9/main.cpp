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
#include <string>
#include <iomanip>

using namespace std;
int main() {
  // Data Abstraction:
  string fileName;
  ifstream inputFile;
  int currentNumber;

  int min = 9999999;
  int max = -9999999;
  int sum = 0;
  int count = 0;
  double average;

  // Input:
  do {
    cout << "Enter Data File Name: ";
    cin >> fileName;
    inputFile = ifstream(fileName);

  } while (!inputFile.is_open());
    
  // Process:
  // use getline?
  do {
    inputFile >> currentNumber;
    cout << currentNumber << endl;

    count += 1;
    sum += currentNumber;
    
    if (currentNumber < min) {
      min = currentNumber;
    }

    if (currentNumber > max) {
      max = currentNumber;
    }
  } while (!inputFile.eof());

  average = static_cast<double>(sum) / static_cast<double>(count);

  inputFile.close();
    
  // Output:
  cout << fixed << setprecision(2);
  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;
  cout << "Sum = " << sum << endl;
  cout << "Count = " << count << endl;
  cout << "Average = " << average << endl;
    
  // Assumptions:

  return 0;
}
