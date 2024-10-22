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

void Strcpy(char s1[], const char s2[]) {
  int i = 0;
  while (s2[i] != '\0') {
    s1[i] = s2[i];
    i++;
  }
}

int Strcmp(const char s1[], const char s2[]) {
  int i = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i]) {
      return s1[i] - s2[i];
    }
    i++;
  }

  return s1[i] - s2[i];
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
