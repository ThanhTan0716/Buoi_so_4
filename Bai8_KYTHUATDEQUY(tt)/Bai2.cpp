#include <stdio.h>


int tongChan(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    int last = a[n - 1];
    if (last % 2 == 0) {
        return last + tongChan(a, n - 1);
    } else {
        return tongChan(a, n - 1);
    }
}


int binarySearch(int a[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x) {
            return mid;
        }
        if (a[mid] > x) {
            return binarySearch(a, left, mid - 1, x);
        }
        return binarySearch(a, mid + 1, right, x);
    }
    return -1;
}


int maxChan(int a[], int n) {
    if (n == 0) {
        return -1; 
    }
    int max = maxChan(a, n - 1);
    int last = a[n - 1];
    if (last % 2 == 0 && last > max) {
        return last;
    }
    return max;
}


int tongLe(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    int last = a[n - 1];
    if (last % 2 != 0) {
        return last + tongLe(a, n - 1);
    } else {
        return tongLe(a, n - 1);
    }
}


void xuatSoViTriLe(int a[], int n, int index) {
    if (index >= n) {
        return;
    }
    if (index % 2 != 0) {
        printf("%d ", a[index]);
    }
    xuatSoViTriLe(a, n, index + 1);
}


int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 7;


    printf("Tong cac phan tu chan: %d\n", tongChan(a, n));

 
    int index = binarySearch(a, 0, n - 1, x);
    if (index != -1) {
        printf("Tim thay %d tai vi tri %d\n", x, index);
    } else {
        printf("Khong tim thay %d\n", x);
    }


    printf("Max chan: %d\n", maxChan(a, n));


    printf("Tong cac phan tu le: %d\n", tongLe(a, n));


    printf("Cac so o vi tri le: ");
    xuatSoViTriLe(a, n, 0);
    printf("\n");

    return 0;
}

