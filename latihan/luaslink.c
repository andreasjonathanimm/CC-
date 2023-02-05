/* File: luaslink.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca jari-jari, menghitung luas lingkaran */
#include <stdio.h>
int luasLingkaran(int r) {
    return 3.1415 * r * r;
}
int main() {
    float r;

    /* Input*/
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    /* Proses */
    printf("Luas lingkaran: %f\n", luasLingkaran(r));
    printf("Akhir program\n");
    return 0;
}