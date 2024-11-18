/*
 * Author: Jonathan Deiss
 * Assignment Title: Array of Spheres
 * Assignment Description: Parses an array of spheres
 * Due Date: 11/20/2024
 * Date Created: 11/18/2024
 * Date Last Modified: 11/18/2024
 */
#include "Sphere.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;
int main() {
  // Data Abstraction:
  int numSpheres;
  int numRed;
  double percentRed;
  int numHighVolume;
  double totalArea;
  double averageArea;
  vector<Sphere> spheres;

  string filename;
  ifstream inFile;
  string line; // used to skip the first lines of the file

  // File Open Input
  do {
    cout << "Enter file name: ";
    cin >> filename;
    cout << filename;
    cout << endl;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File Not Open." << endl; 
    }
  } while (!inFile.is_open());
  cout << endl;

  // File Reading Input:
  getline(inFile, line);
  getline(inFile, line);

  while (getline(inFile, line)) {
    stringstream ss;
    double radius;
    string color;
    Sphere sphere;
    ss << line;

    ss >> radius;
    ss >> color;
    sphere.setColor(color);
    sphere.setRadius(radius);

    spheres.push_back(sphere);
  }

  // Process:
  for (unsigned int i = 0; i < spheres.size(); i++) {
    numSpheres += 1;
    if (spheres.at(i).getColor() == "red") {
      numRed += 1;
    }

    if (spheres.at(i).volume() > 215) {
      numHighVolume += 1;
    }

    totalArea += spheres.at(i).area();
  }

  percentRed = static_cast<double>(numRed) / numSpheres;
  averageArea = totalArea / numSpheres;

  // Output:
  cout << "    Number    Radius     Color      Area    Volume";
  cout << endl;
  
  cout << fixed << setprecision(2);

  for (unsigned int i = 0; i < spheres.size(); i++) {
    cout << setw(10) << i;
    cout << setw(10) << spheres.at(i).getRadius();
    cout << setw(10) << spheres.at(i).getColor();
    cout << setw(10) << spheres.at(i).area();
    cout << setw(10) << spheres.at(i).volume();
    cout << endl;
  }

  cout << endl;
  cout << "Total Number of Spheres = " << numSpheres << "." << endl;
  cout << percentRed << " % of Spheres are red." << endl;
  cout << numHighVolume << " Spheres have a Volume over 215." << endl;
  cout << "Average Area = " << averageArea << endl;

  return 0;
}
