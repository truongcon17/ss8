#include <stdio.h>  

int main() {
    int m, n;  
    int x;

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

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int i = 0, j = 0;
    int check = 0;  

    do {
        if (array[i][j] == x) {
            printf("Gia tri %d ton tai tai vi tri [%d][%d]\n", x, i, j);
            check = 1;
            break;  
        }

        j++;
        if (j == n) {  
            j = 0;
            i++;
        }

    } while (i < m);  

    if (!check) {
        printf("Gia tri %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

