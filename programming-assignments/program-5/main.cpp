/*
 * Author: Jonathan Deiss
 * Assignment Title: Statistics Formulas
 * Assignment Description: Performs some statistics on 5 numbers
 * Due Date: 09/09/2024
 * Date Created: 09/09/2024
 * Date Last Modified: 09/09/2024
 */
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector> 

using namespace std;

//************************************************************
// description: sums all values in a vector
// return: sum of all values
// pre: none
// post: none
//************************************************************
int sumVector(vector<int> nums) {
  int total = 0;
  for (unsigned int i = 0; i < nums.size(); i++) {
    total += nums[i];
  }
  return total;
}

//************************************************************
// description: finds the arithmetic mean of a vector
// return: the arithmetic mean
// pre: none
// post: none
//************************************************************
double arithmeticMean(vector<int> nums) {
  int sum = sumVector(nums);

  return 1.0 * sum / nums.size();
}

//************************************************************
// description: finds the geometric mean of a vector
// return: the geometric mean
// pre: none
// post: none
//************************************************************
double geometricMean(vector<int> nums) {
  double total = 1;

  for (unsigned int i = 0; i < nums.size(); i++) {
    total *= pow(nums[i], 1.0 / nums.size());
  }

  return total;
}

//************************************************************
// description: finds the harmonic mean of a vector
// return: the harmonic mean
// pre: none
// post: none
//************************************************************
double harmonicMean(vector<int> nums) {
  double total = 0;

  for (unsigned int i = 0; i < nums.size(); i++) {
    total += 1.0 / nums[i];
  }


  return nums.size() / total;
}

//************************************************************
// description: finds the standard deviation of a vector
// return: the standard deviation
// pre: none 
// post: none
//************************************************************
double standardDeviation(vector<int> nums) {
  double mean = arithmeticMean(nums);
  double total = 0;

  // you don't need to sort to find the standard deviation
  for (unsigned int i = 0; i < nums.size(); i++) {
    total += pow(nums[i] - mean, 2);
  }

  return sqrt(total / nums.size());
}

int main() {
  // Data Abstraction:
  vector<int> nums;
  double arithmetic;
  double geometric;
  double harmonic;
  double standard;

  // Input:
  cout << "Enter five numbers: " << endl;
  for (int i = 0; i < 5; i++) {
    int num;
    cin >> num;
    nums.push_back(num);
    cout << num << endl;
  }

  // Process:
  arithmetic = arithmeticMean(nums);
  geometric = geometricMean(nums);
  harmonic = harmonicMean(nums);
  standard = standardDeviation(nums);

  // Output:
  cout << "Result:" << endl;
  cout << "Data:" << endl;

  for (unsigned int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }

  cout << fixed << setprecision(2);
  cout << "Arithmetic Mean    = " << arithmetic << endl;
  cout << "Geometric Mean     = " << geometric << endl;
  cout << "Hardmonic Mean     = " << harmonic << endl;
  cout << "Standard Deviation = " << standard << endl;

  // Assumptions:

  return 0;
}
