/*
 * Author: Jonathan Deiss
 * Assignment Title: Point Struct
 * Assignment Description: Defines a struct that holds a point
 * Due Date: 11/06/2024
 * Date Created: 11/04/2024
 * Date Last Modified: 11/04/2024
 */

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  int x, y;

  //************************************************************
  // description: Creates a new point at (x, y)
  // return: none
  // pre: two integers exist
  // post: A new point is constructed
  //************************************************************
  Point(int x, int y);

  //************************************************************
  // description: Creates a new point at (0, 0)
  // return: none
  // pre: none
  // post: A new point is constructed
  //************************************************************
  Point();

  //************************************************************
  // description: Displays a point to any stream
  // return: void
  // pre: A stream and point exist
  // post: The point is unmodified
  //************************************************************
  void display(ostream& stream) const;

  //************************************************************
  // description: Returns the distance between two points
  // return: double
  // pre: Two points exist
  // post: both points are unmodified
  //************************************************************
  double distance(const Point& p) const;

  //************************************************************
  // description: Returns a point of the midpoint of two points
  // return: Point
  // pre: two points exist
  // post: both points are unmodified
  //************************************************************
  Point midPoint(const Point& p) const;
};


#endif
