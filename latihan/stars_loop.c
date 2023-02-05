/* File: stars_loop.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat tangga bintang dengan perulangan */
#include <stdio.h>
void stars(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        int j;
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Masukkan jumlah tangga bintang: ");
    scanf("%d", &n);

    stars(n);
    return 0;
}