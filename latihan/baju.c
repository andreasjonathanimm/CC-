/* File: baju.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca ukuran panjang baju dan lebar bahu */
/* Menentukan apakah ukurannya S (Small), M (Medium), atau L (Large) */
#include <stdio.h>
int main() {
    int panjangBaju, lebarBahu;

    /* Input */
    printf("Masukkan panjang baju: ");
    scanf("%d", &panjangBaju);
    printf("Masukkan lebar bahu: ");
    scanf("%d", &lebarBahu);
    
    /* Proses */
    if (panjangBaju >= 60 && panjangBaju <= 70) {
        if (lebarBahu >= 40 && lebarBahu <= 45) {
            printf("Ukuran baju: S\n");
        } else if (lebarBahu >= 46 && lebarBahu <= 50) {
            printf("Ukuran baju: M\n");
        } else {
            printf("Ukuran baju: L\n");
        }
    } else if (panjangBaju >= 71 && panjangBaju <= 80) {
        if (lebarBahu >= 46 && lebarBahu <= 50) {
            printf("Ukuran baju: M\n");
        } else {
            printf("Ukuran baju: L\n");
        }
    } else {
        printf("Ukuran baju: L\n");
    }
    printf("Akhir program\n");
    return 0;
}