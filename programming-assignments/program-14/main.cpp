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
    
  // Assumptions:

  return 0;
}
