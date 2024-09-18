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
  string input;
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  int count = 0;
    
  // Input:
  getline(cin, input);
    
  // Process:
  for (int i = 0; i < input.length(); i++) {
    char c = input[i];

    for (int j = 0; j < 5; j++) {
      if (c == vowels[j] || c == vowels[j] - 32) {
        count += 1;
        break;
      }
    }
    
  }
    
  // Output:
  cout << count << endl;
    
  // Assumptions:

  return 0;
}
