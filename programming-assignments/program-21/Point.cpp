/*
 * Author: Jonathan Deiss
 * Assignment Title: Point Struct
 * Assignment Description: Defines a struct that holds a point
 * Due Date: 11/06/2024
 * Date Created: 11/04/2024
 * Date Last Modified: 11/04/2024
 */


#include "Point.h"


Point::Point(int x, int y) {

}

Point Point::midPoint(const Point& p) const {
  int newX = (x + p.x) / 2;
  int newY = (y + p.y) / 2;

  return Point(newX, newY);
}


double Point::distance(const Point& p) const {
  int xDiff = x - p.x;
  int yDiff = y - p.y;
  

  return sqrt(xDiff * xDiff + yDiff * yDiff);
}


void Point::display(ostream& stream) const {
  stream << "(" << x << ", " << y << ")" << endl;
}
