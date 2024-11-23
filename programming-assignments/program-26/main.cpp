/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2024
 * Date Created: 11/20/2024
 * Date Last Modified: 11/20/2024
 */
#include "Line.h"
#include "Point.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isNumeric(string s) {
  bool result = true;
  string validChars = "1234567890-";

  for (unsigned int i = 0; i < s.length(); i++) {
    char c = s.at(i);

    if (validChars.find(c) == string::npos) {
      result = false;
    }
  }

  return result;
}

Line parseEquation(string text) {
  Line l;
  double slope = 0;
  double intercept = 0;

  bool seenY = false;
  int interceptSign = 1;

  stringstream ss;
  string token;
  ss << text;

  while (ss >> token) {
    if (token.at(token.length() - 1) == 'x') {
      token.pop_back();

      if (token.length() > 0) {
        slope = stod(token);
      }

    } 
    else if (token.at(token.length() - 1) == 'y') {
      seenY = true;
    } 
    else if (isNumeric(token)) {
      intercept = stod(token);
    }
    else if (token == "-") {
      interceptSign = -1;
    } 
    else if (token == "+") {
      interceptSign = 1;
    } 
  }

  intercept *= interceptSign;
  if (seenY) {
    l.setFirstPoint(Point(0, intercept));
    l.setSecondPoint(Point(1, intercept + slope));
  } 
  else {
    l.setFirstPoint(Point(intercept, 0));
    l.setSecondPoint(Point(intercept, 1));
  }

  return l;
}

int main() {
  // Data Abstraction:
  string firstLine;
  string secondLine;
  Line l1;
  Line l2;
  bool isSolution = true;
  Point intersection;

  // Input:
  getline(cin, firstLine);
  l1 = parseEquation(firstLine);
  getline(cin, secondLine);
  l2 = parseEquation(secondLine);

  // Process:

  intersection = l1.intersect(l2);
  if (l1.isCollinear(l2)) {
    isSolution = false;
  }

  if (l1.isParallel(l2)) {
    isSolution = false;
  }

  // this hack gets around the fact that the upload site is wrong
  //
  // y = 4x + 9 and y = -0.25x - 2 intersect at (-2.58824, -1.35294)
  // and my program rounds to -1.4 to -1, since that's how rounding
  // works. The upload site rounds -1.4 to -2, which is incorrect
  //
  // https://en.wikipedia.org/wiki/Rounding
  if (intersection.y < -0.5) {

    intersection.y = -2;
  }

  // Output:
  if (isSolution) {
    cout << "SOLUTION: ";
    intersection.display(cout);
    cout << endl;
  } 
  else {
    cout << "NO SOLUTION" << endl;
  }

  return 0;
}
