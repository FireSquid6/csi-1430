/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
  // Data Abstraction:
  double radius;
  double volume;
    
  // Input:
  cin >> radius;
    
  // Process:
  volume = radius * radius * radius * (4.0 / 3.0) * M_PI;
    
  // Output:
  cout << fixed << setprecision(3);
  cout << volume << endl;
    
  // Assumptions:


  return 0;
}
