/*
 * Author: Jonathan Deiss
 * Assignment Title: Quadratic Formula
 * Assignment Description: Calculates the quardracit formula
 * Due Date: 09/09/2024
 * Date Created: 09/09/2024
 * Date Last Modified: 09/09/2024
 */
#include <iostream>
#include <iomanip>
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

  // sometimes we get outputs that are -0.00, which we don't want. 
  // This code rounds everything to 0 to ensure that doesn't happen
  x1 = (fabs(x1) < 0.0001) ? 0.00 : x1;
  x2 = (fabs(x2) < 0.0001) ? 0.00 : x2;
  vertexX = (fabs(vertexX) < 0.0001) ? 0.00 : vertexX;
  vertexY = (fabs(x1) < 0.0001) ? 0.00 : vertexY;
    
  // Output:
  cout << fixed << setprecision(2);
  if (realSolutions) {
    if (x1 == x2) {
      cout << x1 << "  ";

    } else {
      cout << x2 << " " << x1 << "  ";
    }
  } else {
    cout << "NO REAL ROOTS  ";
  }

  cout << "(" << vertexX << ", " << vertexY << ")" << endl;
    
  // Assumptions:

  return 0;
}
