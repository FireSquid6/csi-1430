/*
 * Author: Jonathan Deiss
 * Assignment Title: Class Average
 * Assignment Description: Calculates the class average
 * Due Date: 30/4/2024
 * Date Created: 09/30/2024
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

  while (*scoreFile >> currentScore) {
    scoresCount += 1;
    scoresTotal += currentScore;
  }

  if (scoresCount == 0) {
    return -1;
  }

  return static_cast<double>(scoresTotal) / scoresCount;
}

int main() {
  // Data Abstraction:
  string dataFilename;

  ifstream dataFile;
  string first;
  string last;
  string middle;

  double minimum = 99999.9;
  double maximum = -1.0;
  double averagesTotal = 0;
  double classAverage;
  double currentAverage = 0;
  int studentCount = 0;

  // Input:
  cout << "Enter Name of Data File: ";
  cin >> dataFilename;
  cout << dataFilename << endl;

  // Process:
  dataFile.open(dataFilename);

  if (!dataFile.is_open()) {
    cout << "ERROR: File Not Open." << endl;
    dataFile.close();

    return 1;
  }

  while (dataFile >> last) {
    // Data Abstraction
    stringstream outputString;
    ifstream scoreFile;
    string scoreFilename;

    // Input
    dataFile >> first;
    dataFile >> middle;

    // Process:
    scoreFilename = first + last + ".dat";
    scoreFile.open(scoreFilename);
    outputString << first << " " << middle << " " << last << "    ";

    if (scoreFile.is_open()) {

      currentAverage = getAverage(&scoreFile);

      if (currentAverage == -1) {
        outputString << "No Scores";
      } else {
        averagesTotal += currentAverage;
        studentCount += 1;

        if (currentAverage < minimum) {
          minimum = currentAverage;
        }
        if (currentAverage > maximum) {
          maximum = currentAverage;
        }

        outputString << currentAverage;
      }
      scoreFile.close();
    } else {
      outputString << "No Data File";
    }

    // Output:
    cout << outputString.str() << endl;
  }
  classAverage = averagesTotal / studentCount;

  // Output:
  cout << fixed << setprecision(2);
  cout << "Class Average " << classAverage << endl;
  cout << "Max score " << maximum << endl;
  cout << "Min score " << minimum << endl;

  return 0;
}
