/*
 * Author: Jonathan Deiss
 * Assignment Title: My Functions
 * Assignment Description: Math functions
 * Due Date: 10/23/2024
 * Date Created: 10/21/2024
 * Date Last Modified: 10/21/2024
 */
#include "myFunctions.h"

// Note - these functions could be implemented using a type
// generic template to avoid duplication but I don't think
// you want us to do that yet.

int max(int a, int b) {
  int maximum = a;
  if (b > a) {
    maximum = b;
  }

  return maximum;
}

double max(double a, double b) {
  double maximum = a;
  if (b > a) {
    maximum = b;
  }

  return maximum;
}

// same thing about type generics applies here
int max(int list[], int size) {
  // setting to the first value is
  // dangerous since list could be empty
  bool setMax = false;
  int maximum;

  for (int i = 0; i < size; i++) {
    if (!setMax) {
      maximum = list[i];
      setMax = true;
    } 
    else if (list[i] > maximum) {
      maximum = list[i];
    }
  }

  // This means the list was empty
  if (!setMax) {
    maximum = -1;
  }

  return maximum;
}

double max(double list[], int size) {
  bool setMax = false;
  double maximum;

  for (int i = 0; i < size; i++) {
    if (!setMax) {
      maximum = list[i];
      setMax = true;
    } 
    else if (list[i] > maximum) {
      maximum = list[i];
    }
  }

  if (!setMax) {
    maximum = -1;
  }

  return maximum;
}

int min(int a, int b) {
  int minimum = a;
  if (b < a) {
    minimum = b;
  }

  return minimum;
}

double min(double a, double b) {
  double minimum = a;
  if (b < a) {
    minimum = b;
  }

  return minimum;
}

int min(int list[], int size) {
  bool setMin = false;
  int minimum;

  for (int i = 0; i < size; i++) {
    if (!setMin) {
      minimum = list[i];
      setMin = true;
    } 
    else if (list[i] < minimum) {
      minimum = list[i];
    }
  }

  return minimum;
}

double min(double list[], int size) {
  bool setMin = false;
  double minimum;

  for (int i = 0; i < size; i++) {
    if (!setMin) {
      minimum = list[i];
      setMin = true;
    } 
    else if (list[i] < minimum) {
      minimum = list[i];
    }
  }

  return minimum;
}

int absoluteValue(int a) {
  if (a < 0) {
    return -a;
  }

  return a;
}

double absoluteValue(double a) {
  if (a < 0) {
    return -a;
  }

  return a;
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

double combination(int n, int r) {
  double denominator = static_cast<double>((factorial(r) * factorial(n - r)));
  return factorial(n) / denominator;
}

double permutation(int n, int r) { 
  return factorial(n) / static_cast<double>(factorial(n - r)); 
}
