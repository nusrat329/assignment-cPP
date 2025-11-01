#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of square matrix (n): ";
    cin >> n;
    vector<vector<double>> matrix(n, vector<double>(n));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    double det = 1;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] == 0) {
            bool swapped = false;
            for (int j = i + 1; j < n; j++) {
                if (matrix[j][i] != 0) {
                    swap(matrix[i], matrix[j]);
                    det = -det;
                    swapped = true;
                    break;
                }
            }
            if (!swapped) {
                det = 0;
                break;
            }
        }
        for (int j = i + 1; j < n; j++) {
            double ratio = matrix[j][i] / matrix[i][i];
            for (int k = i; k < n; k++) {
                matrix[j][k] -= ratio * matrix[i][k];
            }
        }
    }
    if (det != 0) {
        for (int i = 0; i < n; i++)
            det *= matrix[i][i];
    }
    cout << "Determinant of the matrix = " << det << endl;
    return 0;
}
