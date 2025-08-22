#include <iostream>
using namespace std;
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        int result = sum(n);
        cout << "Sum of natural numbers from 1 to " << n << " is: " << result << endl;
    }

    return 0;
}
