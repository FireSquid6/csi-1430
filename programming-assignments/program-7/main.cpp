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
#include <vector>
#include <algorithm>

using namespace std;
int main() {
  // Data Abstraction:
  vector<double> scores;

  double average;
  char letterGrade;
  double minimum; 
  double maximium; 
  double median;
    
  // Input:
  cout << "Please Enter Five Test Scores." << endl; 

  for (int i = 0; i < 5; i++) {
    double temp;
    cin >> temp;
    scores.push_back(temp);
  }
    

  // Process:
  // sorting is technically not necessary, since median, mean, max, and min can all be found in O(n) time
  // finding the median is kinda hard though, so we'll just sort the vector
  //
  // https://en.wikipedia.org/wiki/Median_of_medians

  sort(scores.begin(), scores.end(), greater<double>());

  maximium = scores.at(0);
  minimum = scores.at(scores.size() -1);
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
  cout << fixed << setprecision(2) << endl;
  cout << "Average = " << average << endl;
  cout << "Grade   = " << letterGrade << endl;
  cout << "Minimum = " << minimum << endl;
  cout << "Maximum = " << maximium << endl;
  cout << "Median  = " << median << endl;

    
  // Assumptions:
  // - nothing in scores is negative or greater than 100.0
  // - everything in scores is a valid double that can be parsed

  return 0;
}
