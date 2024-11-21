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
    else if (token == "-") {
      interceptSign = -1;
    }
    else if (token == "+") {
      interceptSign = 1;
    }
    else if (token.at(token.length() - 1) == 'y') {
      seenY = true;
    }
    else if (isNumeric(token)) {
      intercept = stod(token);
    }
  }

  intercept = intercept * interceptSign;
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
  if (intersection.y < 0) {
    // debug output
    cout << "INPUT: " << endl;
    cout << firstLine << endl;
    cout << secondLine << endl;

    cout << "PARSED:" << endl;
    l1.display(cout);
    cout << endl;
    l2.display(cout);
    cout << endl;
  }
    
  // Output:
  if (isSolution) {
    cout << "S: ";
    intersection.display(cout);
    cout << endl;
  }
  else {
    cout << "NS" << endl;
  }

  return 0;
}
