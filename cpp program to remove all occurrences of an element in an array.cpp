#include <iostream>
using namespace std;

int main() {
    int arr[100], n, element;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to remove: ";
    cin >> element;
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[newSize++] = arr[i];
        }
    }

    cout << "Array after removing all occurrences of " << element << ": ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
