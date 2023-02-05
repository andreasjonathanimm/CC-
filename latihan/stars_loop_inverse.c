/* File: stars_loop_inverse.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat tangga bintang terbalik dengan perulangan */
#include <stdio.h>
void starsCaseInverse(int n) {
    int i;
    for (i = n; i >= 1; i--) {
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

    starsCaseInverse(n);
    return 0;
}