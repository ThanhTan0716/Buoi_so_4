#include <stdio.h>

// a. Ham tim chu so dau tien cua n
int ChuSoDauTien(int n) {
    if (n < 10) return n;
    return ChuSoDauTien(n / 10);
}

// b. Ham tim chu so dao nguoc cua so nguyen duong n
int ChuSoDaoNguoc(int n, int dao) {
    if (n == 0) return dao;
    return ChuSoDaoNguoc(n / 10, dao * 10 + n % 10);
}

// c. Ham tim chu so lon nhat cua so nguyen duong n
int ChuSoLonNhat(int n, int max) {
    if (n == 0) return max;
    int lastDigit = n % 10;
    if (lastDigit > max) max = lastDigit;
    return ChuSoLonNhat(n / 10, max);
}

// d. Ham tim chu so nho nhat cua so nguyen duong n
int ChuSoNhoNhat(int n, int min) {
    if (n == 0) return min;
    int lastDigit = n % 10;
    if (lastDigit < min) min = lastDigit;
    return ChuSoNhoNhat(n / 10, min);
}

// e. Ham kiem tra so nguyen duong n co toan chu so le hay khong
int ToanChuSoLe(int n) {
    if (n == 0) return 1;
    int lastDigit = n % 10;
    if (lastDigit % 2 == 0) return 0;
    return ToanChuSoLe(n / 10);
}

// f. Ham kiem tra so nguyen duong n co toan chu so chan hay khong
int ToanChuSoChan(int n) {
    if (n == 0) return 1;
    int lastDigit = n % 10;
    if (lastDigit % 2 != 0) return 0;
    return ToanChuSoChan(n / 10);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // a. 
    int chuSoDau = ChuSoDauTien(n);
    printf("Chu so dau tien cua %d la: %d\n", n, chuSoDau);

    // b. 
    int chuSoDao = ChuSoDaoNguoc(n, 0);
    printf("Chu so dao nguoc cua %d la: %d\n", n, chuSoDao);

    // c. 
    int chuSoLon = ChuSoLonNhat(n, n % 10);
    printf("Chu so lon nhat cua %d la: %d\n", n, chuSoLon);

    // d. 
    int chuSoNho = ChuSoNhoNhat(n, n % 10);
    printf("Chu so nho nhat cua %d la: %d\n", n, chuSoNho);

    // e. 
    int toanLe = ToanChuSoLe(n);
    if (toanLe)
        printf("%d co toan chu so le\n", n);
    else
        printf("%d khong co toan chu so le\n", n);

    // f. 
    int toanChan = ToanChuSoChan(n);
    if (toanChan)
        printf("%d co toan chu so chan\n", n);
    else
        printf("%d khong co toan chu so chan\n", n);

    return 0;
}

