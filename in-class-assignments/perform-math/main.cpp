/*
 * Author: Jonathan Deiss
 * Assignment Title: Example One
 * Assignment Description: Mathematical operations
 * Due Date: 08/30/2024
 * Date Created: 08/30/2024
 * Date Last Modified: 08/30/2024
 */
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  // Data Abstraction:
  double num1, num2;
  double solution = 0;
  char op;
  bool success = true;

  // Input:
  cout << "Input two numbers and then the operator (+, -, *, /):" << endl;
  cin >> num1;
  cin >> num2;
  cin >> op;

  // Process:
  switch (op) {
    case '+':
      solution = num1 + num2;
      break;
    case '-':
      solution = num1 - num2;
      break;
    case '/':
      solution = num1 / num2;
      break;
    case '*':
      solution = num1 * num2;
      break;
    default:
      success = false;
      break;
  }

  // Output:
  cout << fixed << setprecision(3);
  if (success) {
    cout << num1 << " " << op << " " << num2 << " = " << solution << endl;
  } else {
    cout << "Invalid input" << endl;
  }

  return 0;
}
