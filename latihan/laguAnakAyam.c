/* File: laguAnakAyam.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat lagu anak ayam dengan perulangan */
#include <stdio.h>
void laguAnakAyam(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("Anak ayam turun %d; ", i);
        printf("Mati satu tinggal %d\n", i - 1);
    }
}
int main() {
    laguAnakAyam(10);
    return 0;
}