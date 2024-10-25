/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>


const int WIDTH = 50;

using namespace std;
int main() {
  // Data Abstraction:
  ifstream inFile;
  string filename;
  string h1, h2, h3;
  string title, location, category;
  vector<string> titles, locations, categories;
  string line;
  stringstream stream;
    
  // Input:
  while (!inFile.is_open()) {
    cout << "Enter a filename: ";
    cin >> filename;

    inFile.open(filename);

    if (!inFile.is_open()) {
      cout << "File not found." << endl;
    }
  }


  inFile >> h1 >> h2 >> h3;

  while (getline(inFile, line)) {
    stream << line;

    getline(stream, title, ',');
    getline(stream, location, ',');
    getline(stream, category, ',');

    titles.push_back(title);
    locations.push_back(location);
    categories.push_back(category);

    stream.clear();
    stream.str("");
  }

  // Process:
    
  // Output:
  cout << left;
  cout << setw(WIDTH) << h1 << setw(WIDTH) << h2 << setw(WIDTH) << h3 << endl;

  for (int i = 0; i < titles.size(); i++) {
    cout << setw(WIDTH) << titles[i] << setw(WIDTH) << locations[i] << setw(WIDTH) << categories[i] << endl;
  } 
    
  // Assumptions:

  return 0;
}
