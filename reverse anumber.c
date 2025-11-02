#include <iostream>
using namespace std;
 int main (){
 int num, reversed = 0, reminder;
 cout << "Enter an integer: ";
 cin >> num;
      while ( num != 0) {
   reminder = num /= 10;
   reversed = reversed * 10 + reminder;
    num /= 10;
  }
  cout << "Reversed number = " <<reversed;
  return 0;
  }
