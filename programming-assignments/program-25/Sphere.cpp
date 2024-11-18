/*
 * Author: Jonathan Deiss
 * Assignment Title: Array of Spheres
 * Assignment Description: Parses an array of spheres
 * Due Date: 11/20/2024
 * Date Created: 11/18/2024
 * Date Last Modified: 11/18/2024
 */
#include "Sphere.h"

Sphere::Sphere() {
  radius = 1.0;
  color = "green";
}


Sphere::Sphere(double r) {
  radius = r;
  color = "green";
}

Sphere::Sphere(double r, string c) {
  radius = r;
  color = c;
}


void Sphere::setRadius(double r) {
  radius = r;
}

double Sphere::getRadius() const {
  return radius;
}


void Sphere::setColor(string c) {
  color = c;
}

string Sphere::getColor() const {
  return color;
}


double Sphere::area() const {
  return 4 * PI * radius * radius;
}

double Sphere::volume() const {
  double rCubed = static_cast<double>(radius * radius * radius);

  return (static_cast<double>(4) / 3) * PI * rCubed;
}


bool Sphere::isEqual(const Sphere other) const {
  return (color == other.color) && (radius == other.radius);
}

