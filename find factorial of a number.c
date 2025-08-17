#include <iostream>
using namespace std;
 int main () {
 int n;
 long long factorial = 1;
  cout << "Enter a positve integer: ";
  cin >> n;
  if(n < 0) {
  cout  << "Factorial of a negative number doesn't exist. " << end1;
  } else {
   for(int i = 1; i<= n;i++){
   factorial *= i;
   }
   cout <<"Factorial of " << n << " = " << factorial << end1;
  }

 return 0;

 }
