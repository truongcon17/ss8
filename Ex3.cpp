#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap vao so nguyen n : ";
    cin >> n;

    int matrix[n][n];

    cout << "Nhap cac phan tu cua ma tran:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap phan tu matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMa tran vuong la:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

