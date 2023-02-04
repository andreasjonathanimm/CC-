/* File: kubus.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca panjang rusuk (dalam cm), menghitung volume kubus */
#include <stdio.h>
int main() {
    float r;
    float volume;

    /* Input */
    printf("Masukkan panjang rusuk: ");
    scanf("%f", &r);

    /* Proses */
    volume = r * r * r;

    /* Output */
    printf("Volume kubus: %f cm3\n", volume);
    printf("Akhir program\n");
    return 0;
}