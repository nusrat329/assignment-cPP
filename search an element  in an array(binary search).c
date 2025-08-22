#include <iostream>
using namespace std;
int main() {
    int arr[100], n, i, key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " sorted elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;
    int low = 0, high = n - 1, mid;
    bool found = false;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found) {
        cout << "Element found at position " << (mid + 1) << endl;
    } else {
        cout << "Element not found.\n";
    }

    return 0;
}
