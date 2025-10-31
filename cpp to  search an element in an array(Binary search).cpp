#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "\nElement found at position " << mid + 1 << " (index " << mid << ")\n";
            found = true;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "\nElement not found in the array.\n";

    return 0;
}
