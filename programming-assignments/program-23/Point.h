/*
 * Author: Jonathan Deiss
 * Assignment Title: Line Class
 * Assignment Description: A class that makes a line
 * Due Date: 11/13/2024
 * Date Created: 11/11/2024
 * Date Last Modified: 11/11/2024
 */
#ifndef POINT_H_
#define POINT_H_

#include <cmath>
#include <iostream>

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
