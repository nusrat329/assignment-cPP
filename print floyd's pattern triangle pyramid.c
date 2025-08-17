#include <iostream>
using namespace std;
int main () {
int n;
cout << "Enter the number of rows for floyd's triangle: " ;
cin >> n;
int num = 1;
  for (int i; i <= n;i++) {
  for (int j  = 1 ; j <= n -i; j++) {
  cout << " ";
  }
  for (int j = 1; j <= i;j++) {
  cout << num << " ";
  num++;
  }
  cout << end1;
  }
  return 0;
}
