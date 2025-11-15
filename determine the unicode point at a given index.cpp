#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int index;
    cout << "Enter index: ";
    cin >> index;
    if (index >= 0 && index < s.size())
        cout << "Unicode code point = " << (int)(unsigned char)s[index];
    else
        cout << "Index out of range";
        return 0;
}
