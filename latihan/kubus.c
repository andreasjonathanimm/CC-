/* File: kubus.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca panjang rusuk (dalam cm), menghitung volume kubus */
#include <stdio.h>
int volumeKubus(int r) {
    return r * r * r;
}

int main() {
    float r;
    float volume;

    /* Input */
    printf("Masukkan panjang rusuk: ");
    scanf("%f", &r);

    /* Output */
    printf("Volume kubus: %f cm3\n", volumeKubus(r));
    printf("Akhir program\n");
    return 0;
}