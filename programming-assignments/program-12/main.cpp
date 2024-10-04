/*
 * Author: Jonathan Deiss
 * Assignment Title: Class Average
 * Assignment Description: Calculates the class average
 * Due Date: 10/5/2024
 * Date Created: 9/30/2024
 * Date Last Modified: 09/30/2024
 */
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  // Data Abstraction:
  string dataFilename;

  ifstream dataFile;
  string first;
  string last;
  string middle;

  bool initializedMaxima = false;
  double minimum;
  double maximum;
  double classAverage;

  int totalScoresCount = 0;
  double scoresTotal = 0;

  double currentTotal;
  double currentGrade;
  int currentCount;

  // Input:
  cout << setprecision(2) << fixed;
  cout << "Enter Name of Data File: ";
  cin >> dataFilename;
  cout << dataFilename << endl;

  // Input Validation Loop:
  dataFile.open(dataFilename);

  if (!dataFile.is_open()) {
    cout << "ERROR: File Not Open." << endl;
    dataFile.close();

    exit(1);
  }

  // Preperatory Output:
  cout << endl << "Student                  Average" << endl; 

  // Data Processing Loop:
  while (dataFile >> last) {
    // Data Abstraction:
    stringstream outputString;
    ifstream scoreFile;
    string scoreFilename;
    string nameText;

    // Input:
    dataFile >> first;
    dataFile >> middle;

    // Process:
    scoreFilename = first + last + ".dat";
    scoreFile.open(scoreFilename);

    outputString << setprecision(2) << fixed;

    nameText = first + " " + middle + " " + last;
    while (nameText.length() < 25) {
      nameText += " ";
    }
    outputString << nameText;


    if (scoreFile.is_open()) {
      currentTotal = 0;
      currentCount = 0;

      while (scoreFile >> currentGrade) {
        currentTotal += currentGrade;
        currentCount += 1;

        if (initializedMaxima) {
          if (currentGrade < minimum) {
            minimum = currentGrade;
          }
          if (currentGrade > maximum) {
            maximum = currentGrade;
          }
        }
        else {
          maximum = currentGrade;
          minimum = currentGrade;
          initializedMaxima = true;
        }
      }

      if (currentCount == 0) {
        outputString << "No Grades";
      } 
      else {
        totalScoresCount += currentCount;
        scoresTotal += currentTotal;

        outputString << currentTotal / currentCount;
      }
      scoreFile.close();
    } 
    else {
      outputString << "No Data File";
    }

    // Output:
    cout << outputString.str() << endl;
  }

  // Final Processing:
  classAverage = scoresTotal / totalScoresCount;

  // Final Output:
  cout << endl;
  cout << "Class Average: " << classAverage << endl;
  cout << "Max score: " << maximum << endl;
  cout << "Min score: " << minimum << endl;

  return 0;
}
