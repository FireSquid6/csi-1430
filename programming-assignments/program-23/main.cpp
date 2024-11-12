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
  Line l1 = Line(Point(0, 345), Point(1, 331));
  Line l2 = Line(Point(0, 5), Point(1, 6));

  l1.display(cout);
  cout << endl;
  l2.display(cout);
  cout << endl;

  Point interseciton = l1.intersect(l2);
  interseciton.display(cout);
  cout << endl;
  cout << endl;


  Line l3 = Line(Point(0, 0), Point(1, 1));
  Line l4 = Line(Point(5, 0), Point(5, 1));

  l3.display(cout);
  cout << endl;
  l4.display(cout);
  cout << endl;
  Point other = l3.intersect(l4);
  other.display(cout);
  cout << endl;
  cout << endl;

  return 0;
}
