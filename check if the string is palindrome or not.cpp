#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
{
    getline(cin, s);

    string rev = string(s.rbegin(), s.rend());
    if (rev == s)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
return 0;
}
