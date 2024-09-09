/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector> 

using namespace std;

int sumVector(vector<int> nums) {
  int total = 0;
  for (int i = 0; i < nums.size(); i++) {
    total += nums[i];
  }
  return total;
}

double arithmeticMean(vector<int> nums) {
  int sum = sumVector(nums);

  return 1.0 * sum / nums.size();
}

double geometricMean(vector<int> nums) {
  double total = 1;

  for (int i = 0; i < nums.size(); i++) {
    total *= pow(nums[i], 1.0 / nums.size());
  }

  return total;
}

double harmonicMean(vector<int> nums) {
  double total = 0;

  for (int i = 0; i < nums.size(); i++) {
    total += 1.0 / nums[i];
  }


  return nums.size() / total;
}

double standardDeviation(vector<int> nums) {
  double mean = arithmeticMean(nums);
  double total = 0;

  for (int i = 0; i < nums.size(); i++) {
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
  }

  // Process:
  arithmetic = arithmeticMean(nums);
  geometric = geometricMean(nums);
  harmonic = harmonicMean(nums);
  standard = standardDeviation(nums);

  // Output:
  cout << "Result:" << endl;
  cout << "Data:" << endl;

  for (int i = 0; i < nums.size(); i++) {
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
