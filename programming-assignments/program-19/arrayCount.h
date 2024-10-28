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
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(int arr[], int s, int v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(double a[], int s, double v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(char a[], char v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(vector<int> a, int v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(vector<string> a, string v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(vector<double> a, double v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int arrayCount(vector<char> a, char v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int matrixCount(int m[][MAX_SIZE], int r, int c, int v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int matrixCount(char m[][MAX_SIZE], int r, int c, int v);

//************************************************************
// description:
// return: 
// pre: 
// post:
//************************************************************
int matrixCount(string m[][MAX_SIZE], int r, int c, string v);

#endif
