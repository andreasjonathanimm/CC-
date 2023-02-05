/* File: baju.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca ukuran panjang baju dan lebar bahu */
/* Menentukan apakah ukurannya S (Small), M (Medium), atau L (Large) */
#include <stdio.h>

char ukuranBaju(int panjangBaju, int lebarBahu) {
    if (panjangBaju >= 60 && panjangBaju <= 70) {
        if (lebarBahu >= 40 && lebarBahu <= 45) {
            return "S";
        } else if (lebarBahu >= 46 && lebarBahu <= 50) {
            return "M";
        } else {
            return "L";
        }
    } else if (panjangBaju >= 71 && panjangBaju <= 80) {
        if (lebarBahu >= 46 && lebarBahu <= 50) {
            return "M";
        } else {
            return "L";
        }
    } else {
        return "L";
    }
}

int main() {
    int panjangBaju, lebarBahu;

    /* Input */
    printf("Masukkan panjang baju: ");
    scanf("%d", &panjangBaju);
    printf("Masukkan lebar bahu: ");
    scanf("%d", &lebarBahu);
    
    /* Proses */
    printf("Ukuran baju adalah %s\n", ukuranBaju(panjangBaju, lebarBahu));

    printf("Akhir program\n");
    return 0;
}