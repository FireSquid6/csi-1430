/*
 * Author: Jonathan Deiss
 * Assignment Title: Day parsing
 * Assignment Description: In class assignment 2
 * Due Date: 12/04/2024
 * Date Created: 12/02/2024
 * Date Last Modified: 12/02/2024
 */
#ifndef DAY_H
#define DAY_H

#include <iostream>
#include <iomanip>

using namespace std;

class Day {
private:
    int day;
    int month;
    int year;
public:
    Day();
    Day(int d, int m, int y);
    
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    
    friend ostream& operator<<(ostream& os, const Day& day);
};

#endif
