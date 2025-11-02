#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];
    for(int i=0;i<r;i++)
        swap(a[i][0], a[i][c-1]);
    cout << "Matrix after swapping first and last column:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
