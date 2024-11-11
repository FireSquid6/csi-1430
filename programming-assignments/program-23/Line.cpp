/*
 * Author: Jonathan Deiss
 * Assignment Title: Line Class
 * Assignment Description: A class that makes a line
 * Due Date: 11/13/2024
 * Date Created: 11/11/2024
 * Date Last Modified: 11/11/2024
 */

#include "Line.h"

Line::Line(Point np1, Point np2) {
  p1 = np1;
  p2 = np2;
}

void Line::setFirstPoint(const Point &p) { p1 = p; }

void Line::setSecondPoint(const Point &p) { p1 = p; }


Point Line::getFirstPoint() const {
  return p1;
}

Point Line::getSecondPoint() const {
  return p2;
}

double Line::slope() const {
  double rise = p2.y - p1.y;
  double run = p2.x - p1.x;
  double slope;

  if (run == 0) {
    // avoid a divide by 0 error
    slope = 0;
  } else {
    slope = rise / run;
  }

  return slope;
}

bool Line::hasSlope() const { return p2.x - p1.x == 0; }

bool Line::isParallel(const Line &other) const {
  return slope() == other.slope();
}

bool Line::isPerpendicular(const Line &other) const {
  bool perpendicular = false;

  if (slope() == 0 || other.slope() == 0) {
    // xor operator - if the two slopes are 0 then
    // one of them has to be a vertical slope
    if (hasSlope() ^ other.hasSlope()) {
      perpendicular = true;
    }
  } else {
    perpendicular = -(1 / slope()) == other.slope();
  }

  return perpendicular;
}


bool Line::isCollinear(const Line &other) const {
  bool collinear = true;

  if (slope() != other.slope()) {
    collinear = false;
  }

  if (yIntercept() != other.yIntercept()) {
    collinear = false;
  }

  return collinear;
}

double Line::yIntercept() const {
  return p1.y - slope() * p1.x;
}

Point Line::intersect(const Line & other) const {
  double x = (yIntercept() - other.yIntercept()) 
    / (slope() - other.slope());
  
  double y = slope() * x + yIntercept();

  return Point(x, y);
}

void Line::display(ostream & o) const {
  o << "y = " << slope() << "x + " << yIntercept();
}
