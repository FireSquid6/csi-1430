/*
 * Author: Jonathan Deiss
 * Assignment Title: Sphere Class
 * Assignment Description: Implement a sphere class
 * Due Date: 11/08/2024
 * Date Created: 11/06/2024
 * Date Last Modified: 11/06/2024
 */
#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Sphere {
private:
  double radius;
  string color;
public:
  //************************************************************
  // description: Creates a new sphere
  // return: Sphere
  // pre: none
  // post: a sphere with radius 1 and color "green" is created
  //************************************************************
  Sphere();
  //************************************************************
  // description: Creates a new sphere with radius r
  // return: Sphere
  // pre: a double r exists
  // post: a sphere with radius r is created
  //************************************************************
  Sphere(double r);
  //************************************************************
  // description: Creates a new sphere
  // return: Sphere
  // pre: a double r and string c exist
  // post: a sphere with radius r and color c is created
  //************************************************************
  Sphere(double r, string c);

  //************************************************************
  // description: Sets the radius of a sphere
  // return: void
  // pre: a sphere exists
  // post: the sphere has the radius set to the double
  //************************************************************
  void setRadius(double);
  //************************************************************
  // description: gets the radius of a sphere
  // return: double
  // pre: a sphere exists
  // post: none
  //************************************************************
  double getRadius() const;

  //************************************************************
  // description: Sets the color of a sphere
  // return: void
  // pre: a sphere exists
  // post: the sphere has the color set to the string
  //************************************************************
  void setColor(string);
  //************************************************************
  // description: Gets the color of a sphere
  // return: string
  // pre: a sphere exists
  // post: none
  //************************************************************
  string getColor() const;

  //************************************************************
  // description: Calculates the area of a sphere 
  // return: double
  // pre: a sphere exists
  // post: none
  //************************************************************
  double area() const;
  //************************************************************
  // description: Calculates the volume of a sphere
  // return: double
  // pre: a sphere exists
  // post: none
  //************************************************************
  double volume() const;

  //************************************************************
  // description: Checks if two spheres are equal 
  // return: bool
  // pre: two spheres exist
  // post: both spheres are unmodified
  //************************************************************
  bool isEqual(const Sphere) const;
};


#endif
