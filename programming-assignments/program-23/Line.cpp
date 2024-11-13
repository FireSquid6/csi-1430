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

void Line::setFirstPoint(const Point &p) { 
  p1.x = p.x;
  p1.y = p.y;
}

void Line::setSecondPoint(const Point &p) { 
  p2.x = p.x;
  p2.y = p.y;
}


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
  } 
  else {
    slope = rise / run;
  }

  return slope;
}

bool Line::hasSlope() const { return p2.x - p1.x != 0; }

bool Line::isParallel(const Line &other) const {
  return slope() == other.slope();
}

bool Line::isPerpendicular(const Line &other) const {
  bool perpendicular = false;

  if (!hasSlope() || !other.hasSlope()) {
    // only one can not have a slope
    if (!hasSlope() ^ other.hasSlope()) {
      if (!hasSlope()) {
        perpendicular = other.slope() == 0;
      }
      else {
        perpendicular = slope() == 0;
      }
    }
  } 
  else {
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
  double x; 

  if (hasSlope() && other.hasSlope()) {
    x = -(yIntercept() - other.yIntercept()) 
    / (slope() - other.slope());
  }
  else {
    if (!other.hasSlope()) {
      x = other.getFirstPoint().x;
    }
    else {
      x = p1.x;
    }
  }
  
  double y = slope() * x + yIntercept();

  return Point(x, y);
}

void Line::display(ostream & o) const {
  double m = slope();
  double b = yIntercept();
  if (!hasSlope()) {
    o << "x = " << p1.x;
  }
  else if (m == 0) {
    o << "y = " << b;
  }
  else if (b == 0) {
    if (m == 1) {
      o << "y = x";
    }
    else if (m == -1) {
      o << "y = -x";
    }
    else {
      o << "y = " << m << "x";
    }
  }
  else {
    if (m == 1) {
      o << "y = x + " << b; 
    }
    else if (m == -1) {
      o << "y = -x + " << b;
    }
    else {
      o << "y = " << m << "x " ;

      if (b > 0) {
        o << "+ ";
      }

      o << b;
    }
  }
}
