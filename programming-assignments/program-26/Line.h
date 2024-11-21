/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2024
 * Date Created: 11/20/2024
 * Date Last Modified: 11/20/2024
 */
#ifndef LINE_H_
#define LINE_H_

#include "Point.h"
#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

class Line {
private:
  Point p1, p2;

public:
  // description: Creates a new line
  // return: none
  // pre: none
  // post: A new line exists
  Line(Point = Point(1, 1), Point = Point(0, 0));
  // description: sets the first point
  // return: void
  // pre: a point exists
  // post: the line has its first point set
  void setFirstPoint(const Point &);
  // description: sets the second point
  // return: void
  // pre: a point exists
  // post: the line has its second point set
  void setSecondPoint(const Point &);
  // description: gets the first point
  // return: Point
  // pre: none
  // post: none
  Point getFirstPoint() const;
  // description: gets the second point
  // return: Point
  // pre: none
  // post: none
  Point getSecondPoint() const;
  // description: checks if a line has a slope
  // return: bool
  // pre: none
  // post: none
  bool hasSlope() const;
  // description: gets the slope of a line
  // return: double
  // pre: none
  // post: none
  double slope() const;
  // description: calculates the y intercept
  // return: double
  // pre: none
  // post: none
  double yIntercept() const;
  // description: check if two lines have the same slope
  // return: bool
  // pre: two lines exist
  // post: none
  bool isParallel(const Line &) const;
  // description: checks if two lines are collinear
  // return: bool
  // pre: two lines exist
  // post: none
  bool isCollinear(const Line &) const;
  // description: checks if two lines are perpendicular
  // return: bool
  // pre: two lines exist
  // post: none
  bool isPerpendicular(const Line &) const;
  // description: gets the intersection point
  // return: point
  // pre: two lines exist
  // post: a new point is created
  Point intersect(const Line &) const;
  // description: displays a line
  // return: void
  // pre: none
  // post: the stream is outputted to
  void display(ostream &) const;
};

#endif /* LINE_H_ */
