#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool start = true;
    for (char c : s) {
        if (start && c != ' ') {
            cout << c << " ";
            start = false;
        }
        if (c == ' ')
            start = true;
    }
    return 0;
}
