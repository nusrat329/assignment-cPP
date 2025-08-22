#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i*i <= num; ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool found = false;
    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << " = " << i << " + " << (n - i) << endl;
            found = true;
        }
    }

    if (!found) {
        cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}
