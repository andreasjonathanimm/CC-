/* File: max2.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mencari nilai maksimum dan banyak nilai yang bernilai maksimum dari sebuah tabel yang berisi 10 nilai integer (terdapat duplikat) */
#include <stdio.h>
int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 200, 30, 8, 99, 100};
    int max;
    int count;

    max = Tab[0];
    count = 0;
    for (i = 1; i < 10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
            count = 1;
        } else if (Tab[i] == max) {
            count++;
        }
    }
    printf("Nilai max = %d\n", max);
    printf("Banyak nilai yang bernilai maksimum = %d\n", count);

    return 0;
}