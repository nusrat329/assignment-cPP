#include <iostream>
using namespace std;
 bool isprime(int n) {
   if (n<2) return false ;
   for(int i = 2; i*i <= n; i++) {
   if (n% i== 0)
   reurn false ;
   }
   return true ;
 }
 int main () {
 int N ;
 Cout <<"Enter the value of N : ";
 Cin >> N;
 cout << "Prime numbers from 1 to " <<N<< "are: ";
 for(int i =2; i<=N; i++) {
 if(is prime(i))
 cout << i <<" ";
 }
 cout<< end1;
 return 0;
 }
