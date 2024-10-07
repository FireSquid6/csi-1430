/*
 * Author: Jonathan Deiss 
 * Assignment Title: Array Backwards
 * Assignment Description: Performs some operations on an array
 * Due Date: 10/11/2024
 * Date Created: 10/07/2024
 * Date Last Modified: 10/07/2024
 */
#include <iostream>
#include <vector>

using namespace std;
int main() {
  // Data Abstraction:
  vector<int> numbers; 
  vector<int> seen;
  int numInputs;
  int input;

  long sum = 0;
  int numDuplicates = 0;
  int min;
  int max;

  // Input:
  cout << "Input the number of elements to store in the array: ";
  cin >> numInputs;
  cout << numInputs << endl;

  cout << "Input " << numInputs << " integers: " << endl;
  for (int i = 0; i < numInputs; i++) {
    cout << "integer - " << i << " : ";
    cin >> input;
    cout << input << endl;
    numbers.push_back(input);
  }
    
  // Process:
  min = numbers[0];
  max = numbers[0];

  for (int i = 0; i < numInputs; i++) {
    sum += numbers[i];
    if (numbers[i] < min) {
      min = numbers[i];
    }
    if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  for (unsigned int i = 0; i < numbers.size() - 1; i++) {
    bool seenThisNumber = false;
    for (unsigned int j = 0; j < seen.size(); j++) {
      if (numbers.at(i) == seen.at(j)) {
        seenThisNumber = true;
      }
    }

    if (!seenThisNumber) {
      seen.push_back(numbers.at(i));
      bool flag = false;
      for (unsigned int j = i + 1; j < numbers.size(); j++) {
        if (numbers.at(i) == numbers.at(j) && !flag) {
          numDuplicates += 1;
          flag = true;
        }
      }
    }
  }
    
  // Output:
  cout << endl << endl;
  cout << "The values stored into the array are : " << endl;
  for (unsigned int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }
  cout << endl << endl;

  cout << "The values stored into the array in reverse are : " << endl;
  for (int i = numbers.size() - 1; i >= 0; i--) {
    cout << numbers[i] << " ";
  }
  cout << endl << endl;
  cout << "The sum of all elements of the array is " << sum << endl;
  cout << "The total number of duplicate elementsin the array is " 
    << numDuplicates << endl;
  cout << "The maximum and minimum element in the array are " 
    << max << " , " << min << endl;

  // Assumptions:

  return 0;
}
