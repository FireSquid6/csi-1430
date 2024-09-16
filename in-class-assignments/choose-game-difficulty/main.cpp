/*
 * Author: Jonathan Deiss
 * Assignment Title: Choose Game Difficulty
 * Assignment Description: Shows prompts to user using a loop
 * Due Date: 09/16/2024
 * Date Created: 09/16/2024
 * Date Last Modified: 09/16/2024
 */
#include <iostream>

using namespace std;
int main() {
  // Data Abstraction:
    
  // Input:
  bool looping = true;

  while (looping) {
    cout << "Please select a difficulty level:" << endl;
    cout << "Easy" << endl;
    cout << "Medium" << endl;
    cout << "Hard" << endl;
    cout << endl;

    string difficulty;
    cin >> difficulty;

    cout << endl;
    if (difficulty == "Easy") {
      cout << "You have selected Easy." << endl;
    } else if (difficulty == "Medium") {
      cout << "You have selected Medium." << endl;
    } else if (difficulty == "Hard") {
      cout << "You have selected Hard." << endl;
    } else {
      cout << "Invalid difficulty level." << endl;
    }

    cout << "Would you like to select another difficulty level? (y/n)" << endl;
    char response;
    cin >> response;

    if (response == 'n') {
      looping = false;
    } else if (response != 'y') {
      cout << "Invalid response." << endl;
    }

    cout << endl;
  }
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}
