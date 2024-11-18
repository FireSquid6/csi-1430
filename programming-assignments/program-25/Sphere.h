/*
 * Author: Jonathan Deiss
 * Assignment Title: Array of Spheres
 * Assignment Description: Parses an array of spheres
 * Due Date: 11/20/2024
 * Date Created: 11/18/2024
 * Date Last Modified: 11/18/2024
 */

#include <string>

using namespace std;

const double PI = 3.14159;

class Sphere{
    private:
	double radius;
	string color;

    public:

	Sphere();
	Sphere(double r);
	Sphere(double r, string c);

	void setRadius( double);
	void setColor(string);

	double getRadius() const;
	string getColor() const;

	double area() const;
	double volume() const;
	bool isEqual(const Sphere other) const;
};
