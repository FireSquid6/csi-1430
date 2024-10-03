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
int main() {
  // Data Abstraction:
  string dataFilename;
  ifstream dataFile;
  bool continueLoop = true;

  double minimum = 99999.9;
  double maximum = -1.0;
  double averagesTotal = 0;
  double classAverage;
  int studentCount = 0;

    
  // Input:
  cout << "Enter Name of Data File: ";
  cin >> dataFilename;
  cout << dataFilename << endl;


  // TODO - use setw to format output
    
  // Process:
  dataFile.open(dataFilename);

  if (!dataFile.is_open()) {
    cout << "Error: File did NOT open." << endl;
    continueLoop = false;
    dataFile.close();
  }

  while (continueLoop) {
    // Data Abstraction:
    // TODO - make this its own function that returns a string
    double scoresTotal;
    double scoresAverage;
    int scoresCount;
    string first;
    string last;
    string middle;
    string scoreFilename;
    ifstream scoreFile;
    
    // Input:
    dataFile >> first;
    dataFile >> last;
    dataFile >> middle;


    // Process:
    scoreFilename = last + first + ".txt";
    scoreFile.open(scoreFilename);

    // Output:

  }
  classAverage = averagesTotal / studentCount;

  // Output:
  cout << "Class Average " << classAverage << endl;
  cout << "Max score " << maximum << endl;
  cout << "Min score " << minimum << endl;
    
  // Assumptions:

  return 0;
}



//************************************************************
// description: Reads the scores from a file
// return: the string to output
// pre: the scores file exists and is open
// post: scores file is closed
//************************************************************
string getScores(string scoreFilename) {

}
