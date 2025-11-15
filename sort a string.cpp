#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << "Sorted string: " << s;
    return 0;
}
