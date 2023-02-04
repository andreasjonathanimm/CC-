/* File: tabel1.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mendefinisikan array dan mengisi nilainya */
#include <stdio.h>
int main() {
    int Tab [5] = {1, 2, 3, 4, 5}; // Tab[0] = 1, Tab[1] = 2, ..., Tab[4] = 5
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char TabChar[4] = {'1', '2', '@', 'Z'};

    int i; // untuk iterasi indeks table
    /* menuliskan isi Tab berderet ke kanan */
    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d ;", i, Tab[i]);
    }
    printf("\n");

    /* Latihan: tuliskan nilai TabX dan TabChar */
    for (i = 0; i < 3; i++) {
        printf("TabX[%d] = %f ;", i, TabX[i]);
    }
    printf("\n");

    for (i = 0; i < 4; i++) {
        printf("TabChar[%d] = %c ;", i, TabChar[i]);
    }
    printf("\n");

    /* menuliskan isi Tab berderet ke bawah */
    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d ;", i, Tab[i]);
        printf("\n");
    }

    /* menuliskan indeks tabel berderet ke bawah */
    for (i = 0; i < 5; i++) {
        printf("%d = %d ;", i, i+1);
        printf("\n");
    }

    /* menuliskan indeks tabel berderet ke bawah */
    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d ;", i, i+1);
        printf("\n");
    }

    return 0;
}