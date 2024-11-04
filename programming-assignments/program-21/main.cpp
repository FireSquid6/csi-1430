/*
 * Author: Jonathan Deiss
 * Assignment Title: Point Struct
 * Assignment Description: Defines a struct that holds a point
 * Due Date: 11/06/2024
 * Date Created: 11/04/2024
 * Date Last Modified: 11/04/2024
 */
#include <iostream>
#include "Point.h"

using namespace std;
int main() {
  Point p1(0, 0);
  Point p2(-5, 62);


  Point midPoint = p1.midPoint(p2);

  p1.display(cout);
  cout << endl;
  p2.display(cout);
  cout << endl;
  midPoint.display(cout);

  return 0;
}
