/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>

using namespace std;
int main() {
  // Data Abstraction:
  int height;
  int spaces;
  char ch;
  int stars;
  int i;
    
  // Input:
  cout << "Please enter the height of the pyramid:";
  cin >> height;
  cout << "Please enter the character you would like to use for the pyramid:";
  cin >> ch;
    
  // Process:
  spaces = height - 1;
  stars = 1;
  for (i = 0; i < height; i++) {
    for (int j = 0; j < spaces; j++) {
      cout << " ";
    }
    for (int j = 0; j < stars; j++) {
      cout << ch;
    }
    cout << endl;


    stars += 2;
    spaces -= 1;
  }
    

  return 0;
}
