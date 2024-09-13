/*
* Author:Jonathan Deiss
* Assignment Title:Example
* Assignment Description:String Operations
* Due Date:09/12/2024
* Date Created:09/12/2024
* Date Last Modified:09/12/2024
*/

#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <vector>
using namespace std;

int main() {
  // Data Abstraction:
  string input;
  string secretMessage = "";
  vector<string> updates = {};
  

  // Input:
  input = "Lorem ipsum donor sit amet";

  // Process:
  // 1. Generate a random secret message out of the input string
  srand(static_cast<int>(time(0)));
  for (int i = 0; i < 6; i++) {
    secretMessage.push_back(input.at(rand() % input.length()));
  }

  updates.push_back(secretMessage); 

  // 2. append # to the end of the secret message.
  input.push_back('#');

  // 4. push back another # to the secret message
  input.push_back('#');

  // 5. Replace the character at the 4th index position with 'FoURTH'

  // 6. Insert "234" where there is an occurence of the character 'H'

  // 7. Get the last 3 characters of the secret message


  // 8. convert the first occurence of the character 'o' to uppercase

  // 9. convert the first occurence of the character 'U' to lowercase

  // Output:

  // Assumptions:

  return 0;
}
/*
 Sample Output

 1. abcde
 2. abcde#
 3. abcde#
 4. abcde##
 5. abcdFoURTH
 6. abcdFoURT234H
 7. 34H
 8. abcdFOURT234H
 9. abcdFOuRT234H
 */



