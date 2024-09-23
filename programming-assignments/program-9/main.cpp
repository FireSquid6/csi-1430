/*
 * Author: Jonathan Deiss
 * Assignment Title: Min Max Sum Count Average
 * Assignment Description: Read and process numbers from a file
 * Due Date: 09/25/2024
 * Date Created: 09/23/2024
 * Date Last Modified: 09/23/2024
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
    cout << "Enter Data File Name: ";
    cin >> fileName;
    cout << fileName << endl;

    inFile.open(fileName);

    if (!inFile.is_open()) {
      cout << "Error: File Not Open." << endl;
    }
  } while (!inFile.is_open());
    



  while (inFile >> currentNumber) {
    sum += currentNumber;
    count += 1;
    
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
  cout << endl; 
  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;
  cout << "Sum = " << sum << endl;
  cout << "Count = " << count << endl;
  cout << "Average = " << average << endl;
    
  // Assumptions:

  return 0;
}
