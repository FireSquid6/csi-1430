/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2204
 * Date Created: 11/20/2024
 * Date Last Modified: 11/20/2024
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

void Point::display(ostream& o) const {
  double displayX = round(x);
  double displayY = round(y);
  
  if (fabs(displayX) < 1) {
    displayX = 0;
  }

  if (fabs(displayX) < 1) {
    displayY = 0;
  }

  o << "(" << displayX << "," << displayY << ")";
}
