/* File: min.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mencari nilai minimum dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int min;

    min = Tab[0];
    for (i = 1; i < 10; i++) {
        if (Tab[i] < min) {
            min = Tab[i];
        }
    }
    printf("Nilai min = %d\n", min);

    return 0;
}