#include <iostream>
using namespace std;

int main() {
   int stop;
   int result;
   int a;
   int b;

   cin >> stop;
   result = 0;

   for (a = 1; a < 5; ++a) {
      cout << a << ": ";
      
      for (b = 0; b < 2; ++b) {
         result += a;
         
         if (result > stop) {
            cout << "_ ";
            continue;
         }
         
         cout << result << ",";
      }
      
      cout << endl;
   }

   return 0;
}
