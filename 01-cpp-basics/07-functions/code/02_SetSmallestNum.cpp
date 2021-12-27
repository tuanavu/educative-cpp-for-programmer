#include <iostream>

using namespace std;

void minimum(int &number1, int &number2) {
  if (number1 > number2) {
    number2 = -1;
  } 
  else if (number2 > number1) {
    number1 = -1;
  } 
  else {
    number1 = -1;
    number2 = -1;
  }
}

int main() {
  int number1 = 6;
  int number2 = 2;
  cout << "Before function call" << endl;
  cout << "number1 = " << number1 << endl;
  cout << "number2 = " << number2 << endl;
  minimum (number1, number2);
  cout << "After function call" << endl;
  cout << "number1 = " << number1 << endl;
  cout << "number2 = " << number2 << endl;
 
  return 0;
}