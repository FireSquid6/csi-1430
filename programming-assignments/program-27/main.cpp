/*
 * Author: Jonathan Deiss
 * Assignment Title: Mixed Data Input
 * Assignment Description: Splitting stuff into multiple files
 * Due Date: 12/04/2024
 * Date Created: 12/02/2024
 * Date Last Modified: 12/02/2024
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


struct Transaction {
  int number;
  double amount;
  char type;
  string code;

  Transaction(int, double, char, string);
  string toString();
};

Transaction::Transaction(int number, double amount, char type, string code) {
  this->number = number;
  this->amount = amount;
  this->type = type;
  this->code = code;
}

string Transaction::toString() {
  stringstream ss;

  ss << fixed << setprecision(2);
  ss << number;
  ss << " ";
  ss << amount;
  ss << " ";
  ss << type;
  ss << " ";
  ss << code;
  ss << endl;

  return ss.str();
}

int main() {
  // Data Abstraction:
  ifstream inFile;
  string line;
  string header;
  string subheader;
  string filename;
  vector<Transaction> transactions;

    
  // Input:
  while (!inFile.is_open()) {
    cout << "Enter Name of Data File: ";
    cin >> filename;
    cout << filename << endl;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "Error: File Failed to Open" << endl;
    }
  }
    
  // Process:
  getline(inFile, header);
  getline(inFile, subheader);

  while (getline(inFile, line)) {
    stringstream ss;
    ss << line;
    int number;
    double amount;
    char type;
    string code;

    ss >> number;
    ss >> amount;
    ss >> type;
    ss >> code;

    transactions.push_back(Transaction(number, amount, type, code));
  }

  // Output:
  ofstream file1;
  ofstream file2;
  ofstream file3;

  file1.open("Company_A.txt");
  file2.open("Company_B.txt");
  file3.open("Company_C.txt");

  for (unsigned int i = 0; i < transactions.size(); i++) {
    Transaction transaction = transactions.at(i);

    if (transaction.number >= 0 && transaction.number < 100) {
      file1 << transaction.toString();
    }
    if (transaction.number >= 300 && transaction.number < 400) {
      file2 << transaction.toString();
    }
    if (transaction.number >= 200 && transaction.number < 300) {
      file3 << transaction.toString();
    }
  }

  file1.close();
  file2.close();
  file3.close();
    
  // Assumptions:

  return 0;
}
