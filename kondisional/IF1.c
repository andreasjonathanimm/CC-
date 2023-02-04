/* File: IF1.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh pemakaian IF satu kasus */
/* membaca nilai integer, menuliskan nilainya jika positif dan lebih dari 5 */
#include <stdio.h>
int main ()
{
    /* Kamus */
    int a;
    /* Algoritma */
    printf("Contoh IF satu kasus\n");
    printf("Masukkan nilai integer: ");
    scanf("%d", &a);
    if (a > 0 && a > 5) {
        printf("Nilai a positif dan lebih dari 5 %d\n", a);
    }

    return 0;
}