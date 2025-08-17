#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the number of Fibonacci terms (N): ";
    cin >> N;
    if (N <= 0) {
        cout << "Sum: 0" << endl;
        return 0;
    }
    long long fib1 = 0, fib2 = 1;
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sum += fib1;
        }
        long long next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    cout << "Sum of Fibonacci numbers at even indexes up to " << N << " terms: " << sum << endl;
    return 0;
}
