/*
 * Author: Jonathan Deiss
 * Assignment Title: Day parsing
 * Assignment Description: In class assignment 2
 * Due Date: 12/04/2024
 * Date Created: 12/02/2024
 * Date Last Modified: 12/02/2024
 */

#include "day.h"

Day::Day() {
    day = 0;
    month = 0;
    year = 0;
}

Day::Day(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}


int Day::getDay() const {
    return day;
}

int Day::getMonth() const {
    return month;
}

int Day::getYear() const {
    return year;
}

void Day::setDay(int d) {
    day = d;
}


void Day::setMonth(int m) {
    month = m;
}

void Day::setYear(int y) {
    year = y;
}


ostream& operator<<(ostream& os, Day& day) {
    os << right << setfill('0');
    os << setw(2) << day.getMonth() 
        << setw(1) << "-" << setw(2) << day.getDay() 
        << setw(1) << "-" << setw(2) << day.getYear() % 100;
    
    return os;
}
