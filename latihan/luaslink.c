/* File: luaslink.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca jari-jari, menghitung luas lingkaran */
#include <stdio.h>
int main() {
    const float PI = 3.1415;
    float r;

    /* Input*/
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    /* Proses */
    printf("Luas lingkaran: %f\n", PI * r * r);
    printf("Akhir program\n");
    return 0;
}