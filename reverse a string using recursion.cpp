#include <iostream>
#include <string>
using namespace std;
string reverseRec(string s) {
    if (s.empty()) return "";
    return reverseRec(s.substr(1)) + s[0];
}
int main() {
    string s;
    getline(cin, s);
    cout << reverseRec(s);
    return 0;
}
