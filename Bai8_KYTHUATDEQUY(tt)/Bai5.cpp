#include <stdio.h>


void hoanDoi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void hoanVi(int A[], int m) {
    if (m == 1) {
       
        for (int i = 0; i < m; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    } else {
        for (int i = 0; i < m; i++) {
            hoanDoi(&A[i], &A[m - 1]); 
            hoanVi(A, m - 1); 
            hoanDoi(&A[i], &A[m - 1]); 
        }
    }
}


int main() {
    int n;

 
    printf("Nhap vao so phan tu cua day n: ");
    scanf("%d", &n);

    int A[n];


    printf("Nhap vao cac phan tu cua day: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

  
    printf("Cac hoan vi cua day la:\n");
    hoanVi(A, n);

    return 0;
}

