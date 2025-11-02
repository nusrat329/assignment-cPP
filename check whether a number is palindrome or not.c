#include <iostream>
using namespace std;
int main() {
    int num, reversed = 0, original num, remainder;
    cout << "Enter an integer: ";
    cin >> num;

    original num = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original num == reversed) {
        cout << original num << " is a palindrome." << endl;
    } else {
        cout << original num << " is not a palindrome." << endl;
    }

    return 0;
}
