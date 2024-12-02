
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   ostringstream objectOSS;
   string object;
   int quantity;
   int price;

   object = "Thumb drive";
   quantity = 9;
   price = 6;

   objectOSS << object << " total is $" << quantity * price;

   cout << objectOSS.str();

   return 0;
}
