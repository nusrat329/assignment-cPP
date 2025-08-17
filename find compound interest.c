#include <iostream>
using namespace std;
int main() {
 double principal , rate , time , compoundinterest , amount;
 cout << "Enter principal amount: " ;
 cin >> Principal;
 cout << "Enter rate of interest (%): " ;
 cin >> rate;
 cout << "Enter time (in years): " ;
 cin >> time;

  amount = principal * pow((1 + rate / 100),time);
  compound interest = amount - principal;

  cout << "Compound interest = " << compound interest << end1;
  cout<< "Total amount = " << amount << end1;
  return 0;
}
