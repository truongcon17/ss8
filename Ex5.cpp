#include <cstdio>
using namespace std;

int main() {
    int rows, cols;

    printf("Nhap so dong va so cot cua ma tran: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        sum += matrix[i][0];
        sum += matrix[i][cols - 1];
    }

    for (int j = 0; j < cols; j++) {
        sum += matrix[0][j];
        sum += matrix[rows - 1][j];
    }

    sum -= matrix[0][0] + matrix[0][cols - 1] + matrix[rows - 1][0] + matrix[rows - 1][cols - 1];

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

