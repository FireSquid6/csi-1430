/*
 * Author: Jonathan Deiss
 * Assignment Title: Guessing Game
 * Assignment Description: A guessing game
 * Due Date: 09/20/2024
 * Date Created: 09/20/2024
 * Date Last Modified: 09/20/2024
 */
#include <iostream>
#include <random>

using namespace std;
int main() {
  // Data Abstraction:
  int seedValue;
  seedValue = time(0);
  seedValue = seedValue - seedValue % 300;
  srand(seedValue);

  int low;
  int high;
  int guess;
  int guesses = 0;

  int randomNumber;

  // Input:
  cout << "Please enter 2 integers: ";
  cin >> high;
  cin >> low;
  cout << high << " " << low << endl << endl;

  cout << "I'm thinking of a number between ";
  cout << low << " and " << high << "." << endl << endl;

  // Process:
  randomNumber = rand() % (high - low + 1) + low;
  while (guess != randomNumber) {
    cout << "Enter guess: ";
    cin >> guess;
    cout << guess;
    guesses += 1;

    if (guess < randomNumber) {
      cout << " - Too low!" << endl;
    }
    else if (guess > randomNumber) {
      cout << " - Too high!" << endl;
    }
    else {
      cout << endl;
      cout << "Correct, it took you " << guesses;
      cout << " tries to guess my number.";
      cout << endl;
    }
  }

  // Output:

  // Assumptions:

  return 0;
}
