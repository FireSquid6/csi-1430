#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Sphere {
private:
  double radius;
  string color;
public:
  Sphere();
  Sphere(double r);
  Sphere(double r, string c);

  void setRadius(double);
  double getRadius() const;

  void setColor(string);
  string getColor() const;

  double area() const;
  double volume() const;

  bool isEqual(const Sphere) const;
};


#endif
