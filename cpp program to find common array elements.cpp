#include <iostream>
using namespace std;
int main() {
    int arr1[100], arr2[100];
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter number of elements in second array: ";
    cin >> n2;
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Common elements: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
