/* File: avg.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Menghitung rata-rata dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int sum;
    float avg;

    sum = 0;
    for (i = 0; i < 10; i++) {
        sum = sum + Tab[i];
    }
    avg = (float) sum / 10;
    printf("Nilai rata-rata = %f\n", avg);

    return 0;
}