#include <iostream>
using namespace std;
int main() {
  int num, square, sum = 0,remainder;
  cout << "Enter a number: ";
  cin >> num;

 while (square != 0) {
 remainder= square % 10;
 sum += remainder;
 square /= 10;
 }
 if (sum == num)
 cout << num << "is a neon number. ";
 else
  cout << num << "is not a neon number. ";
  return 0;
  }


