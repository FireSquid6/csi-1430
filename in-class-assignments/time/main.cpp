/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>

using namespace std;

struct Time {
  int hours;
  int minutes;
  int seconds;

  Time();
  Time(int h, int m, int s);

  void display(ostream& o) const;
  int timeToSec() const;
  Time findDiff(Time t) const;
  void setTime(int s);
};

Time::Time() {
  seconds = 0;
  hours = 0;
  minutes = 0;
}

Time::Time(int h, int m, int s) {
  seconds = s;
  minutes = m;
  hours = h;
}


void Time::display(ostream& o) const {
  o << hours << ":" << minutes << ":" << seconds;
}

int Time::timeToSec() const {
  return hours * 3600 + minutes * 60 + seconds;
}

Time Time::findDiff(Time t) const {
  int s1 = timeToSec();
  int s2 = t.timeToSec();

  int diff = abs(s1 - s2);

  Time newT = Time();
  newT.setTime(diff);

  return newT;
}

void Time::setTime(int s) {
  hours = s / 3600;
  minutes = (s % 3600) / 60;
  seconds = s % 60;
}

int main() {
  // Data Abstraction:
    
  // Input:
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}
