/* File: fibonacci.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat deret fibonacci dengan perulangan */
#include <stdio.h>
int fibonacci(int n) {
    int i;
    int sum = 0;
    int sum2 = 1;
    int sum3 = 0;
    for (i = 1; i <= n; i++) {
        sum3 = sum + sum2;
        sum = sum2;
        sum2 = sum3;
    }
    return sum;
}

int main() {
    int n;

    printf("Masukkan jumlah deret fibonacci: ");
    scanf("%d", &n);
    printf("Deret fibonacci adalah: %d", fibonacci(n));

    printf("Akhir program\n");
    return 0;
}