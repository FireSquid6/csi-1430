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

//************************************************************
// description: Finds the max between two integers
// return: int
// pre:  two integers exist
// post:  the value of the largest (or same if equal) is returned
//************************************************************
int max(int a, int b) {
  int maximum = a;
  if (b > a) {
    maximum = b;
  }

  return maximum;
}

//************************************************************
// description: Finds the max between two doubles
// return: double
// pre: two doubles exist
// post:  the value of the largest (or same if equal) is returned
//************************************************************
double max(double a, double b) {
  double maximum = a;
  if (b > a) {
    maximum = b;
  }

  return maximum;
}

//************************************************************
// description: Finds the maximum value in an array of integers
// return: int
// pre: an array of integer values exists
// post: the maximum value in the array is returned
//************************************************************
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

//************************************************************
// description: returns the maximum value in an array of doubles
// return: double
// pre: an array of double values exists
// post: the largest value in the array is returned
//************************************************************
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

//************************************************************
// description: finds the minimum value between two integers
// return: int
// pre: two integers exist
// post: the value of the smallest (or same if equal) is returned
//************************************************************
int min(int a, int b) {
  int minimum = a;
  if (b < a) {
    minimum = b;
  }

  return minimum;
}

//************************************************************
// description: finds the minimum value between two doubles
// return: double
// pre: two doubles exist
// post: the value of the smallest (or same if equal) is returned
//************************************************************
double min(double a, double b) {
  double minimum = a;
  if (b < a) {
    minimum = b;
  }

  return minimum;
}

//************************************************************
// description: returns the value of the smallest integer in an array
// return: int
// pre: an array of integer values exist
// post: the samllest value in the array is returned
//************************************************************
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

//************************************************************
// description: returns the value of the smallest double in an array
// return: double
// pre: an array of double values exist
// post: the smallest value in the array is returned
//************************************************************
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

//************************************************************
// description: Returns the absolute value of an integer
// return: int
// pre: some integer exists
// post: integer value is unchanged
//************************************************************
int absoluteValue(int a) {
  if (a < 0) {
    return -a;
  }

  return a;
}

//************************************************************
// description: Returns the absolute value of a double
// return: double
// pre: some double exists
// post: double value is unchanged
//************************************************************
double absoluteValue(double a) {
  if (a < 0) {
    return -a;
  }

  return a;
}

//************************************************************
// description: Returns the factorial of a number
// return: int
// pre: some int exists
// post: the value of the int is unchagned
//************************************************************
int factorial(int n) {
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

//************************************************************
// description: Return the nubmer of combinations of n choose r
// return: double
// pre: two integer values n and r exist
// post:  the values of m and n are unchanged
//************************************************************
double combination(int n, int r) {
  double denominator = static_cast<double>((factorial(r) * factorial(n - r)));
  return factorial(n) / denominator;
}

//************************************************************
// description: calculates the number of permutations of n choose r
// return: double
// pre: two integer values n and r exist
// post: the value of n and r are unchanged
//************************************************************
double permutation(int n, int r) { 
  return factorial(n) / static_cast<double>(factorial(n - r)); 
}
