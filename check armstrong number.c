#include <iostream>
using namespace std;
 int main (){
  int num, original  num,  reminder, n = 0;
  double result = 0.0;
  cout << "Enter an integer: ";
  cin >> num;
  original num =num;
  while (original num != 0) {
    original num /= 10;
    ++n;
  }
  original num = num;

  while (original num != 0) {
    reminder = original num /= 10;
  }
  if ((int)result == num)
  cout << num <<"is an armstrong number. ";
   else
   cout << num <<"is not an armstrong number.";
  return 0;
  }
