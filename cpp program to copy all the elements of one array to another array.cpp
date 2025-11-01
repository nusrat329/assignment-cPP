#include <iostream>
using namespace std;
int main() {
    int arr1[100], arr2[100];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    cout << "Elements of the second array after copying: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    cout << endl;
    return 0;
}
