/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2024
 * Date Created: 11/20/2024
 * Date Last Modified: 11/20/2024
 */
#ifndef POINT_H_
#define POINT_H_

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

struct Point {
  double x, y;

  // description: Creates a new point
  // return: none
  // pre: a point exists
  // post: a point is created
  Point(const Point &p);

  // description: Creates a new point
  // return: none
  // pre: none
  // post: creates a new point at the specified position
  Point(double x = 0, double y = 0);

  // description: assigns a point
  // return: Point
  // pre: another point exists
  // post: the second point is unmodified
  Point &operator=(const Point &p);

  // description: gets the distance between two points
  // return: double
  // pre: two points exist
  // post: the distance is calculated
  double distance(Point p) const;


  // description: displays the point
  // return: void
  // pre: none
  // post: none
  void display(ostream&) const;
};

#endif
