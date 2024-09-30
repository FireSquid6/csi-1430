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

  long n1_long = n1;
  long n2_long = n2;
  long n3_long = n3;
  long n4_long = n4;
  long n5_long = n5;

  long int_biggest = INT_MAX;  // the largest number an int can hold
  long biggest = LONG_MAX;  // the largest number a long can hold

  long badResult = n1 * n2 * n3 * n4 * n5;  // n1 * n2 * n3 * n4 * n5 is too big for an int to hold
  long mostResult = n1 * n2 * n3;  // this is the most I can get without it overflowing
  long otherGoodResult = n1_long * n2_long * n3_long * n4_long * n5_long;

  // but over here it's fine because each int is typecasted to a long implicity before
  // being multiplied
  long goodResult = n1;
  goodResult *= n2;
  goodResult *= n3;
  goodResult *= n4;
  goodResult *= n5;

  cout << "int biggest: " << int_biggest << endl;  
  cout << "long biggest: " << biggest << endl;
  cout << "badResult: " << badResult << endl;
  cout << "goodResult: " << goodResult << endl;
  cout << "otherGoodResult: " << otherGoodResult << endl;
  
  return 0;
}
