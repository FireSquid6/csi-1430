/*
 * Author: Jonathan Deiss
 * Assignment Title: C-style String
 * Assignment Description: C-style string functions
 * Due Date: 10/25/2024
 * Date Created: 10/21/2024
 * Date Last Modified: 10/21/2024
 */
#ifndef CSTRING_H
#define CSTRING_H

//************************************************************
// description: calculates the length of a string
// return: int
// pre: a string s1 exists
// post: the length of s1 is returned
//************************************************************
int Strlen(const char s1[]);

//************************************************************
// description: copies the contents of s2 into s1
// return: void
// pre: a string s1 and s2 exist
// post: s1 is now equal to s2 
//************************************************************
void Strcpy(char s1[], const char s2[]);

//************************************************************
// description: compares two strings 
// return: int
// pre: strings s1 and s2 exist
// post: 0 or the difference between the first different character is returned
//************************************************************
int Strcmp(const char s1[], const char s2[]);

//************************************************************
// description: concatenates s2 onto s1
// return: void
// pre: strings s1 and s2 exist
// post: s2 is now appended to s1
//************************************************************
void Strcat(char s1[], const char s2[]);

#endif
