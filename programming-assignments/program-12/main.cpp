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

//************************************************************
// description: Reads the scores from a file
// return: the average score of the files or -1 if there are no scores
// pre: the scores file exists and is open
// post: scores file is closed
//************************************************************
double getAverage(ifstream *scoreFile) {
  int scoresTotal = 0;
  int scoresCount = 0;
  int currentScore;
  double returnValue;

  while (*scoreFile >> currentScore) {
    scoresCount += 1;
    scoresTotal += currentScore;
  }


  // this is bad and could be more readable with an early return
  // but if I do that the upload site complains
  if (scoresCount == 0) {
    returnValue = -1;
  } else {
    returnValue = static_cast<double>(scoresTotal) / scoresCount;
  }
  return returnValue;
}

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
  double averagesTotal = 0;
  double classAverage;
  double currentAverage = 0;
  int studentCount = 0;

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
      currentAverage = getAverage(&scoreFile);

      if (currentAverage == -1) {
        outputString << "No Scores";
      } 
      else {
        averagesTotal += currentAverage;
        studentCount += 1;

        if (initializedMaxima) {
          if (currentAverage < minimum) {
            minimum = currentAverage;
          }
          if (currentAverage > maximum) {
            maximum = currentAverage;
          }
        }
        else {
          maximum = currentAverage;
          minimum = currentAverage;
          initializedMaxima = true;
        }

        outputString << currentAverage;
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
  classAverage = averagesTotal / studentCount;

  // Final Output:
  cout << endl;
  cout << "Class Average: " << classAverage << endl;
  cout << "Max score: " << maximum << endl;
  cout << "Min score: " << minimum << endl;

  return 0;
}
