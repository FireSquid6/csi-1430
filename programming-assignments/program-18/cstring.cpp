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
