#include <iostream>
using name space std;
 int main () {
 int year;
 cout << "Enter a year: ";
 cin >> year;

 if ((year % 400 == 0) || (year % 4 == 0 && year % 100 ! = 0))
 cout << year << "is a leap year. " << end1;
  cout << year << "is not a leap year. " << end1;
  return 0;
 }
