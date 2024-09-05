/*
 * Author: Jonathan Deiss
 * Assignment Title: Sum The Digits in an Integer
 * Assignment Description: Sums the digits in the integer
 * Due Date: 9/6/2024
 * Date Created: 9/6/2024
 * Date Last Modified: 9/6/2024

 */
#include <iostream>

using namespace std;
int main() {
  // Data Abstraction:
  long number;
  long digitSum = 0;
    
  // Input:
  cout << "Enter an integer between 0 and 9999999: ";
  cin >> number;
    
  // Process:
  while (number > 0) {
    digitSum += number % 10;
    number /= 10;
  }
    
  // Output:
  cout << "The sum of the digits is " << digitSum << "." << endl;
    
  // Assumptions:

  return 0;
}
