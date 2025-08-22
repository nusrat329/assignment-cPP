#include <iostream>
using namespace std;
int main() {
    int arr[100], n, i;
    float sum = 0, avg;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / n;
    cout << "Average = " << avg << endl;
    return 0;
}
