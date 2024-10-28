/*
 * Author: Jonathan Deiss
 * Assignment Title: Array Processing
 * Assignment Description: This program will process arrays using different stuff
 * Due Date: 10/30/2024
 * Date Created: 10/28/2024
 * Date Last Modified: 10/28/2024
 */

#include <vector>
#include "arrayCount.h"


int arrayCount(int a[], int s, int v) {
  int count = 0;
  for (int i = 0; i < s; i++) {
    if (a[i] == v) {
      count += 1;
    }
  }

  return count;
}

int arrayCount(double a[], int s, double v) {
  int count = 0;
  for (int i = 0; i < s; i++) {
    if (a[i] == v) {
      count += 1;
    }
  }

  return count;
}

int arrayCount(char a[], int s, char v) {
  int count = 0;
  for (int i = 0; i < s; i++) {
    if (a[i] == v) {
      count += 1;
    }
  }

  return count;
}


int arrayCount(string a[], int s, string v) {
  int count = 0;
  for (int i = 0; i < s; i++) {
    if (a[i] == v) {
      count += 1;
    }
  }

  return count;
}

int arrayCount(vector<int> a, int v) {
  int count = 0;
  for (unsigned int i = 0; i < a.size(); i++) {
    if (a.at(i) == v) {
      count += 1;
    }
  }

  return count;
}

int arrayCount(vector<string> a, string v) {
  int count = 0;
  for (unsigned int i = 0; i < a.size(); i++) {
    if (a.at(i) == v) {
      count += 1;
    }
  }

  return count;
}

int arrayCount(vector<double> a, double v) {
  int count = 0;
  for (unsigned int i = 0; i < a.size(); i++) {
    if (a.at(i) == v) {
      count += 1;
    }
  }

  return count;
}


int arrayCount(vector<char> a, char v) {
  int count = 0;
  for (unsigned int i = 0; i < a.size(); i++) {
    if (a.at(i) == v) {
      count += 1;
    }
  }

  return count;
}
