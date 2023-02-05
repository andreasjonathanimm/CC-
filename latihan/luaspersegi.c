/* File: luaspersegi.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca panjang dan lebar persegi (dalam m), menghitung luas persegi (dalam m2) */
#include <stdio.h>
int luasPersegi(int p, int l) {
    return p * l;
}

int main() {
    float p, l;
    float luas;

    /* Input */
    printf("Masukkan panjang: ");
    scanf("%f", &p);
    printf("Masukkan lebar: ");
    scanf("%f", &l);

    /* Output */
    printf("Luas persegi: %f m2\n", luasPersegi(p, l));
    printf("Akhir program\n");
    return 0;
}