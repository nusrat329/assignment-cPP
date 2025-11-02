#include <iostream>
using namespace std;
int main() {
    int num, i, flag = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
 
    for (i = 2; i * i <= num;i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << end1;
        return 0;
        }
