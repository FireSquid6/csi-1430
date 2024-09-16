/*
 * Author: Jonathan Deiss
 * Assignment Title: Choose Game Difficulty
 * Assignment Description: Using a loop to get user input
 * Due Date: 09/16/2024
 * Date Created: 09/16/2024
 * Date Last Modified: 09/16/2024
 */
#include <iostream>

using namespace std;
int main() {
  // Data Abstraction:
  char choice = 'y';
  int difficultyLevel;

  // Input:

  // Process:

  // Output:
  while (choice == 'y') {
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "Choose the Difficulty Level:" << endl;

    cin >> difficultyLevel;

    switch (difficultyLevel) {
      case 1:
        cout << " EASY " << endl;
        break;
      case 2:
        cout << " MEDIUM " << endl;
        break;
      case 3:
        cout << " HARD " << endl;
        break;
      default:
        cout << "Please choose a valid difficulty level:" << endl;
        cin >> difficultyLevel;
        break;
    }

    cout << "Would you like to th choose again? (y/n):" << endl;
    cin >> choice;

  }
  // Assumptions:

  return 0;
}
