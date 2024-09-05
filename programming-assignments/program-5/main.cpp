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

using namespace std;
int main() {
  // Data Abstraction:
  double scores[5];

  double average;
  char letterGrade;
  double minimum = 999999.0;  // really high number
  double maximium = -1.0; // shouldn't be possible
    
  // Input:
  cout << "Please Enter Five Test Scores." << endl; 

  for (int i = 0; i < 5; i++) {
    cin >> scores[i];
  }
    

  // Process:
  for (int i = 0; i < 5; i++) {
    if (scores[i] < minimum) {
      minimum = scores[i];
    }
    if (scores[i] > maximium) {
      maximium = scores[i];
    }
    average += scores[i];
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

    
  // Assumptions:
  // - nothing in scores is negative or greater than 100.0

  return 0;
}
