#include <iostream>
using namespace std;
 int main (){
  int low , high , num , original num, reminder, n;
  double result;
  cout << "Enter two numbers(intervals): ";
  cin >> low >> high;
  cout << "Armstrong numbers between " << low <<"and " << high <<"are: " << end1;

    for(num = low; num <= high; num++) {
    original num = num;
    n = 0;
    result = 0.0;
    while (original num != 0) {
    original num /= 10;
    ++n;
  }
  original num =num;
     while (original num != 0) {
   reminder = original num /= 10;
   result += pow(reminder, n);
   original num /= 10;
  }
  if ((int)result ==num)
cout << num << " ";
}

  return 0;
    }
