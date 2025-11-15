#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPangram(const string &s) {
    bool letters[26] = {false};

    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            letters[c - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!letters[i])
            return false;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPangram(s))
        cout << "The string IS a pangram.\n";
    else
        cout << "The string is NOT a pangram.\n";

    return 0;
}
