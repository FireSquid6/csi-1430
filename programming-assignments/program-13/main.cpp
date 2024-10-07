/*
 * Author: Jonathan Deiss
 * Assignment Title: Fibonacci Array
 * Assignment Description: Prints the Nth value in the fibonacci sequence
 * Due Date: 10/10/2024
 * Date Created: 10/06/2024
 * Date Last Modified: 10/06/2024
 */
#include <iostream>
#include <vector>

using namespace std;
int main() {
  // Data Abstraction:
  vector<long> fibonacci = {0, 1};
  vector<int> requests;
  int numRequests;
  int request;
    
  // Input:
  cin >> numRequests;

  for (int i = 0; i < numRequests; i++) {
    cin >> request;
    requests.push_back(request);
  }

  // Process:
  for (int i = 2; i < 91; i++) {
    fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
  }
    
  // Output:
  for (int i = 0; i < numRequests; i++) {
    cout << "Case " << i + 1 << ": Fib(" << requests[i] << ") = ";
    cout << fibonacci[requests[i]] << endl;
  }
    
  // Assumptions:

  return 0;
}
