/*
 * Author: Jonathan Deiss
 * Assignment Title: Line Class
 * Assignment Description: A class that makes a line
 * Due Date: 11/13/2024
 * Date Created: 11/11/2024
 * Date Last Modified: 11/11/2024
 */

#include "Point.h"

Point::Point(const Point &p) { *this = p; }

Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}


Point &Point::operator=(const Point &p) {
  x = p.x;
  y = p.y;
  return *this;
}

double Point::distance(Point p) const {
  return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
