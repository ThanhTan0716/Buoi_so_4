#include <stdio.h>


int demChuSo(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + demChuSo(n / 10);
}

int main() {
    int n;


    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

 
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
    } else {
     
        int soChuSo = demChuSo(n);
        printf("So chu so cua %d la: %d\n", n, soChuSo);
    }

    return 0;
}

