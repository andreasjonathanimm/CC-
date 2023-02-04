/* File: max.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int max;

    max = Tab[0];
    for (i = 1; i < 10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
        }
    }
    printf("Nilai max = %d\n", max);

    // other loops implementation
    // while (i < 10) {
    //     if (Tab[i] > max) {
    //         max = Tab[i];
    //     }
    //     i++;
    // }

    // do {
    //     if (Tab[i] > max) {
    //         max = Tab[i];
    //     }
    //     i++;
    // } while (i < 10);

    return 0;
}