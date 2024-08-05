#include <stdio.h>


int demChuSoChan(int n) {
    if (n == 0) {
        return 0;
    }
    int chuSoCuoi = n % 10;
    if (chuSoCuoi % 2 == 0) {
        return 1 + demChuSoChan(n / 10);
    } else {
        return demChuSoChan(n / 10);
    }
}

int main() {
    int n;

 
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

 
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
    } else {
 
        int soChuSoChan = demChuSoChan(n);
        printf("So chu so chan cua %d la: %d\n", n, soChuSoChan);
    }

    return 0;
}

