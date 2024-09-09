/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <cmath>
#include <iostream>
#include <vector> // I am NOT about to do 25 if statements

using namespace std;

int sumVector(vector<int> nums) {
  int total = 0;
  for (int i = 0; i < nums.size(); i++) {
    total += nums[i];
  }
  return total;
}

int productVector(vector<int> nums) {
  int total = 0;

  for (int i = 0; i < nums.size(); i++) {
    total *= nums[i];
  }

  return total;
}

double arithmeticMean(vector<int> nums) {
  int sum = sumVector(nums);

  return 1.0 * sum / nums.size();
}

double geometricMean(vector<int> nums) {
  int product = productVector(nums);

  return pow(static_cast<double>(product), 1.0 / nums.size());
}

int main() {
  // Data Abstraction:
  vector<int> nums;
  double arithmetic;
  double geometric;

  // Input:
  for (int i = 0; i < 5; i++) {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    nums.push_back(num);
  }

  // Process:
  arithmetic = arithmeticMean(nums);
  geometric = geometricMean(nums);

  // Output:
  cout << "Result:" << endl;
  cout << "Data:" << endl;

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }

  cout << "Arithmetic Mean   = " << arithmetic << endl;
  cout << "Geometric Mean    = " << geometric << endl;

  // Assumptions:

  return 0;
}
