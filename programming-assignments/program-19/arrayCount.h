/*
 * Author: Jonathan Deiss
 * Assignment Title: Array Processing
 * Assignment Description: This program will process arrays using different stuff
 * Due Date: 10/30/2024
 * Date Created: 10/28/2024
 * Date Last Modified: 10/28/2024
 */


#ifndef ARRAYCOUNT_H
#define ARRAYCOUNT_H

#include <string>
#include <vector>

using namespace std;

const int MAX_SIZE = 25;

//************************************************************
// description: Counts the number of `v` in `arr` of length `s`
// return: int
// pre: arr exists and is of size s
// post: return value is the number of v in arr
//************************************************************
int arrayCount(int arr[], int s, int v);

//************************************************************
// description: Counts the number of `v` in `arr` of length `s`
// return: int
// pre: arr exists and is of size s
// post: return value is the number of v in arr
//************************************************************
int arrayCount(double a[], int s, double v);

//************************************************************
// description: Counts the number of `v` in `arr` of length `s`
// return: int
// pre: arr exists and is of size s
// post: return value is the number of v in arr
// ************************************************************
int arrayCount(char a[], char v);

//************************************************************
// description: Counts the number of `v` in `a` vector 
// return: int
// pre: vector exists 
// post: return value is the number of v in a
// ************************************************************
int arrayCount(vector<int> a, int v);

//************************************************************
// description: Counts the number of `v` in `a` vector 
// return: int
// pre: vector exists 
// post: return value is the number of v in a
// ************************************************************
int arrayCount(vector<string> a, string v);

//************************************************************
// description: Counts the number of `v` in `a` vector 
// return: int
// pre: vector exists 
// post: return value is the number of v in a
// ************************************************************
int arrayCount(vector<double> a, double v);

//************************************************************
// description: Counts the number of `v` in `a` vector 
// return: int
// pre: vector exists 
// post: return value is the number of v in a
// ************************************************************
int arrayCount(vector<char> a, char v);

//************************************************************
// description: Counts the number of `v` in `m` of size `r` by `c`
// return: int
// pre: matrix exists and is of row r and column c
// post: return value is the number of v in m
//************************************************************
int matrixCount(int m[][MAX_SIZE], int r, int c, int v);

//************************************************************
// description: Counts the number of `v` in `m` of size `r` by `c`
// return: int
// pre: matrix exists and is of row r and column c
// post: return value is the number of v in m
//************************************************************
int matrixCount(char m[][MAX_SIZE], int r, int c, int v);

//************************************************************
// description: Counts the number of `v` in `m` of size `r` by `c`
// return: int
// pre: matrix exists and is of row r and column c
// post: return value is the number of v in m
//************************************************************
int matrixCount(string m[][MAX_SIZE], int r, int c, string v);

#endif
