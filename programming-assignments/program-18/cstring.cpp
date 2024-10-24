/*
 * Author: Jonathan Deiss
 * Assignment Title: C-style String
 * Assignment Description: C-style string functions
 * Due Date: 10/25/2024
 * Date Created: 10/21/2024
 * Date Last Modified: 10/21/2024
 */

int Strlen(const char s1[]) {
  int i = 0;
  // this will not work if there is no null terminator!
  // scary!
  while (s1[i] != '\0') {
    i++;
  }
  
  return i;
}

void Strcpy(char dest[], const char src[]) {
  int i = 0;
  bool flag = true;

  while (flag) {
    dest[i] = src[i];

    if (src[i] == '\0') {
      flag = false;
    }

    i++;
  }
}

int Strcmp(const char s1[], const char s2[]) {
  int i = 0;
  int difference = 0;
  bool foundDifference = false;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i] && !foundDifference) {
      foundDifference = true;
      difference = s1[i] - s2[i];
    }
    i++;
  }

  if (!foundDifference) {
    difference = s1[i] - s2[i];
  }

  return difference;
}

void Strcat(char s1[], const char s2[]) {
  int i = 0;
  while (s1[i] != '\0') {
    i++;
  }
  int j = 0;
  while (s2[j] != '\0') {
    s1[i] = s2[j];
    i++;
    j++;
  }
  s1[i] = '\0';
}
