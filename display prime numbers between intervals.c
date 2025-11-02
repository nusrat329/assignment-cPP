#include <iostream>
using namespace std;
int main() {
 int low , high,i, flag;

  cout <<"Enter two numbers(intervals): ";
  cin >> low >> high;
  cout <<"Prime numbers between" << low <<"and " <<high <<"are:" ;
  for (int num = low; num <= high; num++) {
   if (num <= 1 )
   continue;
   flag = 1 ;

   for (i = 2; i*i <= num; i++) {
   if (num % i == 0) {
    flag = 0;
    break;
   }

}
if (flag == 1)
cout << num << " ";
  }
return 0;

}
