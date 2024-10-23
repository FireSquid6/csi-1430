/*
 * Author: Jonathan Deiss
 * Assignment Title: My Functions
 * Assignment Description: Math functions
 * Due Date: 10/23/2024
 * Date Created: 10/21/2024
 * Date Last Modified: 10/21/2024
 */
#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

//************************************************************
// description: Finds the max between two integers
// return: int
// pre:  two integers exist
// post:  the value of the largest (or same if equal) is returned
//************************************************************
int max(int, int);

//************************************************************
// description: Finds the max between two doubles
// return: double
// pre: two doubles exist
// post:  the value of the largest (or same if equal) is returned
//************************************************************
double max(double, double);

//************************************************************
// description: Finds the maximum value in an array of integers
// return: int
// pre: an array of integer values exists
// post: the maximum value in the array is returned
//************************************************************
int max(int[], int);

//************************************************************
// description: returns the maximum value in an array of doubles
// return: double
// pre: an array of double values exists
// post: the largest value in the array is returned
//************************************************************
double max(double[], int);

//************************************************************
// description: finds the minimum value between two integers
// return: int
// pre: two integers exist
// post: the value of the smallest (or same if equal) is returned
//************************************************************
int min(int, int);

//************************************************************
// description: finds the minimum value between two doubles
// return: double
// pre: two doubles exist
// post: the value of the smallest (or same if equal) is returned
//************************************************************
double min(double, double);

//************************************************************
// description: returns the value of the smallest integer in an array
// return: int
// pre: an array of integer values exist
// post: the samllest value in the array is returned
//************************************************************
int min(int[], int);

//************************************************************
// description: returns the value of the smallest double in an array
// return: double
// pre: an array of double values exist
// post: the smallest value in the array is returned
//************************************************************
double min(double[], int);

//************************************************************
// description: Returns the absolute value of an integer
// return: int
// pre: some integer exists
// post: integer value is unchanged
//************************************************************
int absoluteValue(int);

//************************************************************
// description: Returns the absolute value of a double
// return: double
// pre: some double exists
// post: double value is unchanged
//************************************************************
double absoluteValue(double);

//************************************************************
// description: Returns the factorial of a number
// return: int
// pre: some int exists
// post: the value of the int is unchagned
//************************************************************
int factorial(int);

//************************************************************
// description: Return the nubmer of combinations of n choose r
// return: double
// pre: two integer values n and r exist
// post:  the values of m and n are unchanged
//************************************************************
double combination(int, int);


//************************************************************
// description: calculates the number of permutations of n choose r
// return: double
// pre: two integer values n and r exist
// post: the value of n and r are unchanged
//************************************************************
double permutation(int, int);

#endif
