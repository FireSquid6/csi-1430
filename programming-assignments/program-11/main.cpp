/*
 * Author: Jonathan Deiss
 * Assignment Title: GPS
 * Assignment Description: GPS Calculations
 * Due Date: 10/2/2024
 * Date Created: 09/30/2024
 * Date Last Modified: 09/30/2024
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;
int main() {
  // Data Abstraction:
  ifstream inFile;
  string filename;

  bool continueLoop = true;
  bool started = false;
  string command;
  int x;
  int y;

  int startX;
  int startY;
  int endX;
  int endY;
  int lastX;
  int lastY;

  double totalDistance = 0;
  int points = 0;
  double startDistance = 0;
  double dist;
  double averageDistance = 0;
  double totalStartDistance = 0;

  // dummy var used to skip the first two lines
  string dummy;
  
    
  // Input:
  do {
    cout << "Enter the file name: ";
    cin >> filename;
    cout << filename << endl;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File Failed to open" << endl;
      inFile.close();
    }
  } while (!inFile.is_open());
    
  // Process:
  getline(inFile, dummy);
  getline(inFile, dummy);

  while (continueLoop) {
    inFile >> command;
    inFile >> x;
    inFile >> y;

    if (command == "START" && !started) {
      startX = x;
      startY = y;

      lastX = x;
      lastY = y;

      started = true;
    } else if ((command == "STOP" || command == "DATA") && started) {
      totalDistance += sqrt(pow(x - lastX, 2) + pow(y - lastY, 2));
      totalStartDistance += sqrt(pow(x - startX, 2) + pow(y - startY, 2));
      points += 1;

      if (command == "STOP") {
        continueLoop = false;
        endX = x;
        endY = y;

      } else {
        lastX = x;
        lastY = y;
      }
    }
  }
  averageDistance = totalStartDistance / points;
  startDistance = sqrt(pow(endX - startX, 2) + pow(endY - startY, 2));

  inFile.close();
    
  // Output:
  cout << fixed << setprecision(1);
  cout << "Final Location: (" << endX << ", " << endY << ")" << endl;
  cout << "Total distance traveled " << totalDistance << endl;
  cout << "Distance to starting point " << startDistance << endl;
  cout << "Average distance to start point = " << averageDistance << endl;
    
  // Assumptions:

  return 0;
}
