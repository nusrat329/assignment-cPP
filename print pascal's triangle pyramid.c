#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int rows;
    cout << "Enter the number of rows for pascal's triangle: ";
    cin >> rows;
     for (int i = 0; i < rows; i++) {
     for (int j = 0; j< rows - i; j++)
     cout << " ";
     for (int j = 0; j <= i; j++)
     cout << combination(i-j) << " ";
     cout <<end1;
     }
     return 0;
     }
