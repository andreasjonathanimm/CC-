/* File: air.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca temperatur air pada tekanan atmosfer */
/* Menentukan apakah air dalam keadaan beku, padat, atau uap */
#include <stdio.h>
int main() {
    float t;

    /* Input */
    printf("Masukkan temperatur air: ");
    scanf("%f", &t);

    /* Proses */
    if (t <= 0) {
        printf("Air dalam keadaan beku\n");
    } else if (t > 0 && t < 100) {
        printf("Air dalam keadaan padat\n");
    } else {
        printf("Air dalam keadaan uap\n");
    }
    printf("Akhir program\n");
    return 0;
}