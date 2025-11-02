#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    for(char c : s)
        freq[c]++;
    for(char c : s)
        if(freq[c] == 1){
            cout << "First non-repeating character: " << c;
            return 0;
        }
    cout << "No non-repeating character found.";
    return 0;
    }
