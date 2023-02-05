/* File: air.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca temperatur air pada tekanan atmosfer */
/* Menentukan apakah air dalam keadaan beku, padat, atau uap */
#include <stdio.h>

char keadaanAir(float t) {
    if (t <= 0) {
        return "Beku";
    } else if (t > 0 && t < 100) {
        return "Padat";
    } else {
        return "Uap";
    }
}

int main() {
    float t;

    /* Input */
    printf("Masukkan temperatur air: ");
    scanf("%f", &t);

    /* Proses */
    printf("Keadaan air adalah %s\n", keadaanAir(t));

    printf("Akhir program\n");
    return 0;
}