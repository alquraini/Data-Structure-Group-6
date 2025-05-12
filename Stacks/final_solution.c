#include <stdio.h>

int twoStacks(int x, int a[], int n, int b[], int m) {
    int sum = 0, i = 0, j = 0, count = 0;

    
    while (i < n && sum + a[i] <= x) {
        sum += a[i];
        i++;
    }

    count = i;

    while (j < m && i >= 0) {
        sum += b[j];
        j++;

        while (sum > x && i > 0) {
            i--;
            sum -= a[i];
        }

        if (sum <= x && (i + j) > count) {
            count = i + j;
        }
    }

    return count;
}

int main() {
    int n, m, x;

    printf("Masukkan jumlah elemen stack A: ");
    scanf("%d", &n);
    int a[n];
    printf("Masukkan elemen stack A (dari atas ke bawah):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Masukkan jumlah elemen stack B: ");
    scanf("%d", &m);
    int b[m];
    printf("Masukkan elemen stack B (dari atas ke bawah):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Masukkan batas maksimum jumlah total elemen yang boleh diambil (x): ");
    scanf("%d", &x);

    int result = twoStacks(x, a, n, b, m);
    printf("Maksimum elemen yang bisa diambil: %d\n", result);

    return 0;
}
