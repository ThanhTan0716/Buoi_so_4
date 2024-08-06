#include <stdio.h>


double TinhLaiSuat(double n, double x, int m) {
    if (m == 0) return n; 
    return TinhLaiSuat(n, x, m - 1) * (1 + x / 100);
}

int main() {
    double n, x;
    int m;

    printf("Nhap so tien ban dau (trieu dong): ");
    scanf("%lf", &n);
    printf("Nhap lai suat hang nam (%%): ");
    scanf("%lf", &x);
    printf("Nhap so nam gui: ");
    scanf("%d", &m);

    double result = TinhLaiSuat(n, x, m);
    printf("So tien sau %d nam la: %.2lf trieu dong\n", m, result);

    return 0;
}

