/*
 * Author: Jonathan Deiss
 * Assignment Title: Letter Grade
 * Assignment Description: Does various calculations on grades
 * Due Date: 09/18/2024
 * Date Created: 09/16/2024
 * Date Last Modified: 09/16/2024
 */
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  // Data Abstraction:
  vector<double> scores;

  double average;
  char letterGrade;
  double minimum;
  double maximium;
  double median;
  bool valid = true;

  // Input:
  cout << "Please Enter Five Test Scores." << endl;

  for (int i = 0; i < 5; i++) {
    double temp;
    cin >> temp;

    if (temp < 0 || temp > 100) {
      valid = false;
    }
    scores.push_back(temp);
  }

  // echo input
  cout << fixed << setprecision(2);
  for (unsigned int i = 0; i < scores.size(); i++) {
    cout << scores.at(i) << " ";
  }
  cout << endl << endl;

  // Process:
  // sorting is technically not necessary, since median, mean, max, and min
  // can all be found in O(n) time. finding the median is kinda hard though,
  // so we'll just sort the vector
  //
  // https://en.wikipedia.org/wiki/Median_of_medians

  sort(scores.begin(), scores.end(), greater<double>());

  maximium = scores.at(0);
  minimum = scores.at(scores.size() - 1);
  median = scores.at(scores.size() / 2);
  for (int i = 0; i < 5; i++) {
    average += scores.at(i);
  }
  average /= 5;

  switch (int(average) / 10) {
  case 10:
  case 9:
    letterGrade = 'A';
    break;
  case 8:
    letterGrade = 'B';
    break;
  case 7:
    letterGrade = 'C';
    break;
  case 6:
    letterGrade = 'D';
    break;
  default:
    letterGrade = 'F';
    break;
  }

  // Output:
  if (valid) {
    cout << "Average = " << average << endl;
    cout << "Grade   = " << letterGrade << endl;
    cout << "Min     = " << minimum << endl;
    cout << "Max     = " << maximium << endl;
    cout << "Median  = " << median << endl;
  } else {
    cout << "ERROR: BAD DATA" << endl;
  }

  // Assumptions:
  // - everything in scores is a valid double that can be parsed

  return 0;
}
