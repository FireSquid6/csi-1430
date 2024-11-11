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

using namespace std;

struct Point {
  double x, y;

  Point(const Point &p) { *this = p; }

  Point(double x = 0, double y = 0) {
    this->x = x;
    this->y = y;
  }

  Point &operator=(const Point &p) {
    x = p.x;
    y = p.y;
    return *this;
  }

  double distance(Point p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
  }
};

#endif
