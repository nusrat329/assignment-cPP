#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> arr(n);
    cin.ignore();
{
    for (int i = 0; i < n; i++)
        getline(cin, arr[i]);

    reverse(arr.begin(), arr.end());

    cout << "Reversed array:\n";
    for (string &s : arr)
        cout << s << endl;
}
return 0;
}
