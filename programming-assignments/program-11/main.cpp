/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
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

  double total_distance = 0;
  int points = 0;
  double start_distance = 0;
  double dist;
  double average_distance = 0;
  double total_start_distance = 0;

  // dummy var used to skip the first two lines
  string dummy;
  
    
  // Input:
  do {
    cout << "Enter the file name: ";
    cin >> filename;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File did NOT open." << endl;
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
      total_distance += sqrt(pow(x - lastX, 2) + pow(y - lastY, 2));
      total_start_distance += sqrt(pow(x - startX, 2) + pow(y - startY, 2));
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
  average_distance = total_start_distance / points;
  start_distance = sqrt(pow(endX - startX, 2) + pow(endY - startY, 2));
    
  // Output:
  cout << fixed << setprecision(1);
  cout << "Final Location: (" << endX << ", " << endY << ")" << endl;
  cout << "Total distance traveled " << total_distance << endl;
  cout << "Distance to starting point " << start_distance << endl;
  cout << "Average distance to start point = " << average_distance << endl;
    
  // Assumptions:

  return 0;
}
