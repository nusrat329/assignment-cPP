#include <iostream>
using namespace std;
int main() {
    const int rows = 3;
    const int columns = 4;
    int array[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "2D Array contents:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
