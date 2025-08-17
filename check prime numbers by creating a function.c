#include <iostream>
using namespace std;
bool isprime (int num){
if (num <= 1)
return false;
for (int i = 2; i *i<= num; i++){
  if (num % i == 0)
  return false;
}
  return true;
}
  int main () {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   if(isprime(n))
   cout << n << "is a prime number. " << end1;
   else
   cout << n << "is not a prime number. " << end1;
   return 0;
  }
