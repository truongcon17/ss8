#include <stdio.h>  // Thu vi?n cho printf và scanf

int main() {
    int m, n;

    printf("Nhap so dong cua mang 2 chieu: ");
    scanf("%d", &m);
    printf("Nhap so cot cua mang 2 chieu: ");
    scanf("%d", &n);

    int array[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Mang 2 chieu in theo thu tu nguoc la:\n");
    
    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            printf("%d ", array[i][j]);
        }
        printf("\n");  
    }

    return 0;
}

