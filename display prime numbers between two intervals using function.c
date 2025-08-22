#include <iostream>
using namespace std ;
bool isprime (int num) {
  if (num <= 1)
  return false ;
  for (int i = 2; i * i <= num; i++) {
  if (num % i == 0)
  return false;
  }
  return true;
}
void displayprimes(int low , int high){
cout << " prime numbers between" << low << " and "<<high <<"are : " ;
  for (int i = low; i <= high; i++) {
  if(isprime(i)){
  cout << i <<" ";
  }
   }
   cout << end1 ;
   }
   int main () {
    int low , high;
    cout << "Enter two numbers : ";
    cin >> low >> high;

    displayprimes (low , high );
    return 0;
   }

