#include <stdio.h>


int Distribute(int m, int n) {
    if (m == 0 && n == 0) return 1; 
    if (m == 0 || n == 0) return 0; 

    int count = 0;
    for (int i = 1; i <= m; i++) {
        if (i * n >= m) { 
            count += Distribute(m - i, n - 1);
        }
    }
    return count;
}

int main() {
    int m, n;
    printf("Nhap so vat (m): ");
    scanf("%d", &m);
    printf("Nhap so doi tuong (n): ");
    scanf("%d", &n);

    int result = Distribute(m, n);
    printf("So cach chia thuong la: %d\n", result);

    return 0;
}

