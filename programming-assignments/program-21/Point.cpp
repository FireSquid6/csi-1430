/*
 * Author: Jonathan Deiss
 * Assignment Title: Point Struct
 * Assignment Description: Defines a struct that holds a point
 * Due Date: 11/06/2024
 * Date Created: 11/04/2024
 * Date Last Modified: 11/04/2024
 */


#include "Point.h"


int ceilDivide(int a, int b) {
  if (a % 2 != 0) {
    a += 1 * (a / abs(a));
  }

  return a / b;
}


Point::Point(int newX, int newY) {
  x = newX;
  y = newY;
}

Point Point::midPoint(const Point& p) const {
  int newX = ceilDivide(p.x + x, 2);
  int newY = ceilDivide(p.y + y, 2);

  return Point(newX, newY);
}


double Point::distance(const Point& p) const {
  int xDiff = x - p.x;
  int yDiff = y - p.y;
  

  return sqrt(xDiff * xDiff + yDiff * yDiff);
}


void Point::display(ostream& stream) const {
  stream << "(" << x << "," << y << ")";
}
