#include <stdio.h>


int toHopChapK(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return toHopChapK(n - 1, k - 1) + toHopChapK(n - 1, k);
}

int main() {
    int n, k;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    int result = toHopChapK(n, k);
    printf("C(%d, %d) = %d\n", n, k, result);

    return 0;
}


