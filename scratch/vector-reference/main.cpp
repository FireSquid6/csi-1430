/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <vector>

using namespace std;

void modifyVector(vector<int>& myVector) {
  myVector.push_back(5);
}


int main() {
  // Data Abstraction:
  vector<int> myVector;

  myVector.push_back(1);
  myVector.push_back(2);

  cout << "Before: " << endl;
  for (int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << ", ";
  }
  cout << endl;

  modifyVector(myVector);
  cout << "After: " << endl;
  for (int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << ", ";
  }
  cout << endl;

  return 0;
}
