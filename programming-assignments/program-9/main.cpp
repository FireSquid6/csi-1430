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
  ifstream inFile;
  int currentNumber;

  int min = 9999999;
  int max = -9999999;
  int sum = 0;
  int count = 0;
  double average;

  // Input:
  do {
    cout << "Enter File Name:";
    cin >> fileName;

    inFile.open(fileName);

    if (!inFile.is_open()) {
      cout << "Error: File is not open!" << endl;
    }
  } while (!inFile.is_open());
    



  while (inFile >> currentNumber) {
    sum += currentNumber;
    
    if (currentNumber < min) {
      min = currentNumber;
    }

    if (currentNumber > max) {
      max = currentNumber;
    }
  }

  average = static_cast<double>(sum) / static_cast<double>(count);

  inFile.close();
    
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
