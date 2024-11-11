/*
 * Author: Jonathan Deiss
 * Assignment Title: Line Class
 * Assignment Description: A class that makes a line
 * Due Date: 11/13/2024
 * Date Created: 11/11/2024
 * Date Last Modified: 11/11/2024
 */
#ifndef LINE_H_
#define LINE_H_

#include "Point.h"
#include <iostream>
#include <ostream>

using namespace std;

class Line {
private:
  Point p1, p2;

public:
  Line(Point = Point(1, 1), Point = Point(0, 0));

  void setFirstPoint(const Point &);
  void setSecondPoint(const Point &);

  Point getFirstPoint() const;
  Point getSecondPoint() const;

  bool hasSlope() const;
  double slope() const;
  double yIntercept() const;

  bool isParallel(const Line &) const;
  bool isCollinear(const Line &) const;
  bool isPerpendicular(const Line &) const;

  Point intersect(const Line &) const;

  void display(ostream &) const;
};

#endif /* LINE_H_ */
