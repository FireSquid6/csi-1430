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
  // required to make the test run properly
  srand(50);

  // Data Abstraction:
  int n1;
  int n2;
  int guess;
  int guesses = 0;

  int randomNumber;

  // Input:
  cout << "Please enter 2 integers: ";
  cin >> n1;
  cin >> n2;
  cout << n1 << " " << n2<< endl << endl;

  cout << "I'm thinking of a number between ";
  cout << n1 << " and " << n2 << "." << endl << endl;

  // Process:
  if (n1 > n2) {
    randomNumber = (rand() % (n1 - n2 + 1)) + n2;
  } 
  else {
    randomNumber = (rand() % (n2 - n1 + 1)) + n1;
  }

  // used when debugging to ensure that the test case's random 
  // matches the program's random
  // cout << "Ok the secret number is: " << randomNumber << endl;

  while (guess != randomNumber) {
    // Input:
    cout << "Enter guess: ";
    cin >> guess;
    cout << guess;

    // Process:
    guesses += 1;

    // Output:
    if (guess < randomNumber) {
      cout << " - Too low" << endl;
    }
    else if (guess > randomNumber) {
      cout << " - Too high" << endl;
    }
    else {
      cout << endl;
      cout << "Correct, it took you " << guesses;
      cout << " tries to guess my number.";
      cout << endl;
    }
    cout << endl;
  }

  // Output:

  // Assumptions:

  return 0;
}
