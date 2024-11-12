/*
 * Author: Jonathan Deiss
 * Assignment Title: Line Class
 * Assignment Description: A class that makes a line
 * Due Date: 11/13/2024
 * Date Created: 11/11/2024
 * Date Last Modified: 11/11/2024
 */
#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;
int main() {
  // Data Abstraction:
  Line line = Line(Point(1, 1), Point(2, 2));

  line.getFirstPoint().display(cout);
  line.getSecondPoint().display(cout);
  cout << endl;
  cout << line.slope() << endl;

  if (line.hasSlope()) {
    cout << "has slope" << endl;
  } else {
    cout << "no slope" << endl;
  }
  line.display(cout);

  // Input:
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}
