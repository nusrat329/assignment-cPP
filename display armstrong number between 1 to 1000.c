#include <iostream>
using namespace std;
 int main (){
  int num, original  num,  reminder,n ;
  double result;
  cout << "Armstrong numbers between 1 to 1000 are: "<<end1;
  for (num = 1; num <= 1000;num++) {
  original num =num;
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
