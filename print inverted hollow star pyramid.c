#include <iostream>
using namespace std;
int main () {
int n;
cout << "Enter the number of rows: ";
cin >> n;
for (int i = n; i>=1; i++)
for (int j = 1; j<= n; j++)
 cout << " ";
 for (int j = 1; j<=2 * i -1; j++) {
  if(j == 1 || j== 2 * i - 1)
  cout <<" * ";
  else
  cout << " ";
 }
 cout << end1;
 }
 return 0;
}
