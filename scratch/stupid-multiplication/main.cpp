#include <iostream>
#include <climits>

using namespace std;
int main() {
  // the exact numbers in the test case
  int n1 = 999;
  int n2 = 999;
  int n3 = 999;
  int n4 = 999;
  int n5 = 999;

  long int_biggest = INT_MAX;  // the largest number an int can hold
  long biggest = LONG_MAX;  // the largest number a long can hold
  long badResult = n1 * n2 * n3 * n4 * n5;  // this is overflowing for some reason
  long mostResult = n1 * n2 * n3;  // this is the most I can get without it overflowing
  long goodResult = n1;
  // implicity typecasting?
  goodResult *= n2;
  goodResult *= n3;
  goodResult *= n4;
  goodResult *= n5;

  cout << "int biggest: " << int_biggest << endl;  
  cout << "long biggest: " << biggest << endl;
  cout << "badResult: " << badResult << endl;
  cout << "goodResult: " << goodResult << endl;
  
  if (goodResult > biggest) {
    cout << "goodResult is bigger than biggest" << endl;
  } else {
    cout << "goodResult is not bigger than biggest" << endl;
  }

  return 0;
}
