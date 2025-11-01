#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int a[r][c], b[r][c];
    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
                    cin >> a[i][j];
    cout << "Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];
    bool equal = true;
    for (int i = 0; i < r && equal; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != b[i][j]) {
                equal = false;
                break;
            }
        }
    }
    if (equal)
        cout << "Matrices are equal.";
    else
        cout << "Matrices are not equal.";
    return 0;
}
