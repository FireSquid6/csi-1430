/*
 * Author: Jonathan Deiss
 * Assignment Title: Day parsing
 * Assignment Description: In class assignment 2
 * Due Date: 12/04/2024
 * Date Created: 12/02/2024
 * Date Last Modified: 12/02/2024
 */

#include "day.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;


int main() {
    ifstream inFile;
    ofstream outFile;
    string line;
    string first;
    vector<Day> days;
    int monthCount[12];
    string output;
    stringstream outStream;
    stringstream monthStream;
    
    // set up monthCount
    for (int i = 0; i < 12; i++) {
        monthCount[i] = 0;
    }
    
    inFile.open("data.csv");
    
    if (!inFile.is_open()) {
        cout << "Error" << endl;
        exit(1);
    }
    
    getline(inFile, first);
    
    while (getline(inFile, line)) {
        stringstream ss;
        int d, m, y;
        string str;
        ss << line;
        
        getline(ss, str, '/');
        m = stoi(str);
        
        getline(ss, str, '/');
        d = stoi(str);
        
        getline(ss, str, '/');
        y = stoi(str);
        
        days.push_back(Day(d, m, y));
    }
    inFile.close();
    
    for (unsigned int i = 0; i < days.size(); i++) {
        Day day = days.at(i);
        monthCount[day.getMonth() - 1] += 1;
    }
    
    outStream << "Date Stats" << endl;
    monthStream << "January February March April May June ";
    monthStream << "July August September October November December";
    
    for (int i = 0; i < 12; i++) {
        string monthName;
        monthStream >> monthName;
        outStream << setw(15) << left << monthName << setw(2) << monthCount[i] << endl;
    }
    outStream << endl;
    
    outStream << first << endl;
    for (unsigned int i = 0; i < days.size(); i++) {
        outStream << days.at(i) << endl;
        
    }
    
    output = outStream.str();
    
    outFile.open("stat.txt");
    outFile << output;
    outFile.close();
    
    cout << output;
    return 0;
}
