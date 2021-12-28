#include <iostream>

using namespace std;

// Recursive count_digits function
int count_digits(int number) {

  // Base Case
  if (abs(number)/10 == 0) {
    return 1;
  }
  // Recursive Case  
  else {
    return 1 + count_digits(number / 10);
  }

}

// main function
int main() {
  // Initialize number
  int number = 8625;
  // Declare variable result
  int result;
  // Call count_digits function in main and store the returned value in result
  result = count_digits(number);
  // Print value of result
  cout << "Number of digits = " << result;
  return 0;
}