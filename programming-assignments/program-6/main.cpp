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

using namespace std;
int main() {
  // Data Abstraction:
  double a;
  double b;
  double c;

  double x1;
  double x2;

  double vertexX;
  double vertexY;

  bool realSolutions;
    
  // Input:
  cin >> a;
  cin >> b;
  cin >> c;
    
  // Process:
  double discriminant = b * b - 4 * a * c;
  realSolutions = (discriminant >= 0);

  if (realSolutions) {
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
  }

  vertexX = - b / (2 * a);
  vertexY = c - (b * b) / (4 * a);
    
  // Output:
  if (realSolutions) {
    cout << "ZEROS: " << x1 << ", " << x2 << endl;
  } else {
    cout << "NO REAL SOLUTIONS" << endl;
  }

  cout << "VERTEX: (" << vertexX << ", " << vertexY << ")" << endl;
    
  // Assumptions:

  return 0;
}
