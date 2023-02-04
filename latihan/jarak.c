/* File: jarak.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca nilai v (kecepatan), dan t (waktu tempuh) sebuah mobil yang bergerak lurus beraturan dari kota A ke kota B*/
/* Menghitung dan menuliskan jarak kota A ke kota B, yang ditempuh mobil tersebut */
#include <stdio.h>
int main() {
    float v, t, s;

    /* Input */
    printf("Masukkan kecepatan (v) dan waktu tempuh (t): ");
    scanf("%f %f", &v, &t);

    /* Proses */
    s = v * t;

    /* Output */
    printf("Jarak yang ditempuh mobil adalah %f\n", s);
    printf("Akhir program\n");

    return 0;
}