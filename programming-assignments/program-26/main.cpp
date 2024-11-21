/*
 * Author: Jonathan Deiss
 * Assignment Title: System of Linear Equations
 * Assignment Description: Solves two linear equations
 * Due Date: 11/22/2204
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
  // assumes that the string is valid. This means the following forms (n = any number, * = '+' or '-'):
  // y = nx + n
  // y = nx
  // x = n
  Line l;
  double slope = 0;
  double intercept = 0;
  
  bool seenIntercept = false;
  bool seenY = false;
  bool nextNegative = false;

  stringstream ss;
  string token;  
  ss << text;

  while (ss >> token) {
    cout << "PARSING: " << token << endl;
    if (token.at(token.length() - 1) == 'x') {
      token.pop_back();
      cout << "  found slope: " << token << endl;

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
      cout << "  found intercept: " << token << endl;
      intercept = stod(token);
      if (nextNegative) {
        slope = -slope;
      }
      seenIntercept = false;
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
    
  // Input:
  getline(cin, cinLine);
  l1 = parseEquation(cinLine);

  getline(cin, cinLine);
  l2 = parseEquation(cinLine);
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}
