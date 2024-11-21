/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2024
 * Date Created: 11/20/2024
 * Date Last Modified: 11/20/2024
 */
#include <iostream>
#include <string>
#include <sstream>
#include "Line.h"
#include "Point.h"

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
  bool nextNegative = false;

  stringstream ss;
  string token;  
  ss << text;

  while (ss >> token) {
    if (token.at(token.length() - 1) == 'x') {
      token.pop_back();

      if (token.length() > 0) {
        slope = stod(token);
        if (nextNegative) {
          slope = -slope;
        }
      }

      nextNegative = false;
    }
    else if (token.at(token.length() - 1) == 'y') {
      seenY = true;
      nextNegative = false;
    }
    else if (token == "-") {
      nextNegative = true;
    }
    else if (isNumeric(token)) {
      intercept = stod(token);
      if (nextNegative) {
        slope = -slope;
      }
    }
  }

  // y = nx + n or y = nx
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
  string cinLine;
  Line l1;
  Line l2;
  bool isSolution;
  Point intersection;

    
  // Input:
  getline(cin, cinLine);
  cout << cinLine << endl;
  l1 = parseEquation(cinLine);
  getline(cin, cinLine);
  cout << cinLine << endl;
  l2 = parseEquation(cinLine);
    
  // Process:
  intersection = l1.intersect(l2);
  isSolution = !(l1.isParallel(l2) || l1.isCollinear(l2));
    
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
