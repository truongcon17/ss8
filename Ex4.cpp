#include <cstdio>
using namespace std;

int main() {
    int rows, cols;

    printf("Nhap so dong va so cot cua chuong trinh: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Nhap cac phan tu cua chuong trinh:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int max_value = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong chuong trinh la: %d\n", max_value);

    return 0;
}

