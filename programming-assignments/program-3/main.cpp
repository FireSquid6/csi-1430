/*
* Author: Jonathan Deiss
* Assignment Title: Appriximate Pi
* Assignment Description: Approximates PI
* Due Date: 9/4/2024
* Date Created: 9/4/2024
* Date Last Modified: 9/4/2024
 */
#include <iostream>
#include <iomanip>

using namespace std;


//************************************************************
// description: approximate pi using the leibniz formula
// return: float
// pre: n is a positive integer
// post: returns the approximate value of pi with n iterations
//                                                           
//************************************************************
float approximatePi(int n) {
  float sum = 0.0;
  float sign = 1.0;
  float denominator = 1.0;


  for (int i = 0; i < n; i++) {
    sum += sign / denominator;

    sign *= -1;
    denominator += 2;
  }

  return sum * 4;
}

int main() {
  // Data Abstraction
  // Input
  // Process
  float pi1 = approximatePi(6);
  float pi2 = approximatePi(7);

  // Output
  cout << fixed << setprecision(5);
  cout << "PI = " << pi1 << endl;
  cout << "PI = " << pi2 << endl;

  return 0;
}



