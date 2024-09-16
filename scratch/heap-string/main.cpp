#include <iostream>
using namespace std;

int main() {
  int highwayNum;
  int primaryHighwayNum;
  int auxiliaryHighwayNum;

  cin >> highwayNum;

  // Check if highwayNum is in valid range
  if (highwayNum < 1 || highwayNum > 999) {
    cout << highwayNum << " is not a valid interstate highway number." << endl;
  } else {
    // Check if highwayNum is primary or auxiliary
    if (highwayNum >= 1 && highwayNum <= 99) {
      cout << "I-" << highwayNum << " is primary, going ";
      if (highwayNum % 2 == 0) {
        cout << "east/west." << endl;
      } else {
        cout << "north/south." << endl;
      }
    } else {
      // Extract primary and auxiliary highway numbers
      primaryHighwayNum = highwayNum % 100;
      auxiliaryHighwayNum = highwayNum / 100;

      // Check if primaryHighwayNum is valid
      if (primaryHighwayNum == 0) {
        cout << highwayNum << " is not a valid interstate highway number."
             << endl;
      } else {
        cout << "I-" << highwayNum << " is auxiliary, serving I-"
             << primaryHighwayNum << ", going ";
        if (primaryHighwayNum % 2 == 0) {
          cout << "east/west." << endl;
        } else {
          cout << "north/south." << endl;
        }
      }
    }
  }

  return 0;
}
