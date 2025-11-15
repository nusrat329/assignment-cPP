#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int len = 0;
    for (char c : s) len++;
    cout << "Length = " << len;
    return 0;
}
