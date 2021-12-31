#include<iostream>
using namespace std;

int calculateSum(int p1, int p2){
  int sum = p1 + p2;
  return sum;
}

int main() {
  cout<<calculateSum(2,3);  // calculates sum of given numbers
}