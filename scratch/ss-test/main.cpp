/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <sstream>

using namespace std;
int main() {
  stringstream ss;
  ss << "-15x" << endl;

  cout << "Hello, world!" << endl;
  double thing;
  ss >> thing;
  
  cout << thing;
    
  return 0;
}
