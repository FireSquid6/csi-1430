/*
 * Author: Jonathan Deiss
 * Assignment Title: Class Average
 * Assignment Description: Calculates the class average
 * Due Date: 30/4/2024
 * Date Created: 09/30/2024
 * Date Last Modified: 09/30/2024
 */
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


//************************************************************
// description: Reads the scores from a file
// return: the average score of the files or -1 if there are no scores
// pre: the scores file exists and is open
// post: scores file is closed
//************************************************************
double getAverage(ifstream scoreFile) {
  int scoresTotal = 0;
  int scoresCount = 0;
  int currentScore;


  while (scoreFile >> currentScore) {
    scoresCount += 1;
    scoresTotal += currentScore;
  }


  return static_cast<double>(scoresTotal) / scoresCount;
}


int main() {
  // Data Abstraction:
  string dataFilename;
  string outputString;
  ifstream dataFile;
  bool continueLoop = true;
  string first;
  string last;
  string middle;
  string scoreFilename;
  ifstream scoreFile;

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

  while (dataFile >> first) {
    dataFile >> last;
    dataFile >> middle;


    // Process:
    scoreFilename = last + first + ".dat";
    scoreFile.open(scoreFilename);

    if (scoreFile.is_open()) {
      studentCount += 1;
      currentAverage = getAverage(scoreFile);

      if (currentAverage == -1) {

      }

    } else {
      outputString = "No Data File";
    }

    // Output:

  }
  classAverage = averagesTotal / studentCount;

  // Output:
  cout << fixed << setprecision(2) << endl;
  cout << "Class Average " << classAverage << endl;
  cout << "Max score " << maximum << endl;
  cout << "Min score " << minimum << endl;
    
  return 0;
}




