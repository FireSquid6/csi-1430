/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <string>

using namespace std;
int main() {
  string playerName;
  int pivotValue;
  int aliensKilled;
  int citizensSaved;

  int lives;

  cout << "Enter Your Name: ";
  getline(cin, playerName);

  cout << "Enter a number between 1 & 5";
  cin >> pivotValue;

  srand(time(0));
  aliensKilled = rand() % 9 + 50;
  citizensSaved = rand() % 9 + 100;

  cout << "Player Name: " << playerName << endl;
  cout << "Aliens Killed: " << aliensKilled << endl;
  cout << "Citizens Saves: " << citizensSaved << endl;

  return 0;
}
