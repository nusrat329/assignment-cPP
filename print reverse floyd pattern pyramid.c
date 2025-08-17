#include <iostream>
using namespace std;
int main () {
int n;
cout << "Enter number of rows: ";
cin >> n;
int total = n * (n + 1)/2;
int num = total;
 for (int i = 1; i <= n; i++) {
 for (int j = 1; j<= n - i; j++) {
      cout << " ";
 }
  for (int j = 1 ; j<= i; j++) {
  cout << num<< " ";
  num++;
  }
  cout << end1;
 }
 return 0;
 }
