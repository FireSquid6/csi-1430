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
  int numInputs;
  int input;

  long sum = 0;
  int min;
  int max;

  // Input:
  cout << "Input the number of elements to store in the array: ";
  cin >> numInputs;
  cout << numInputs << endl << endl;

  cout << "Input " << numInputs << " integers: ";
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
    
  // Output:
  cout << endl;
  cout << "The values stored into the array are : " << endl;
  for (int i = 0; i < numInputs; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl << endl;

  cout << "The values stored into the array in reverse are : " << endl;
  for (int i = numInputs - 1; i >= 0; i--) {
    cout << numbers[i] << " ";
  }
  cout << endl << endl;
  cout << "The sum of all elements of the array is " << sum << endl;
  cout << "The maximum and minimum element in the array are " << max << " , " << min << endl;
    
  // Assumptions:

  return 0;
}
