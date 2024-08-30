/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  // Data Abstraction:
  double radius;
  double area;
  const double PI = 3.1415927;
    
  // Input:
  cin >> radius;
    
  // Process:
  area = PI * radius * radius;
    
  // Output:
  cout << fixed << setprecision(3);
  cout << "Circle with radius " << radius << " has an area of " << area << endl;
    
  // Assumptions:

  return 0;
}
