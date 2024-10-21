// TODO - finish documentation
#include "myFunctions.h"

// Note - these functions could be implemented using a
// type generic like so to avoid duplication:
// template <typename T> T max(T a, T b) {
//   T maximum = a;
//   if (b > a) {
//     maximum = b;
//   }
//
//   return maximum;
// }
//
// I don't think you want us to do that yet though

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
    } else if (list[i] > maximum) {
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
    } else if (list[i] > maximum) {
      maximum = list[i];
    }

  }

  if (!setMax) {
    maximum = -1;
  }

  return maximum;
}
