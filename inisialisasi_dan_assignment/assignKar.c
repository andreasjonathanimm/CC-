/* File : assignKar.c */
/* Penulis : Jonathan Immanuel */
/* Deskripsi: */
/* Program ini berisi contoh sederhana untuk mendefinisikan variabel bertipe karakter*/
#include <stdio.h>
int main() {
    char c = 65; // 65 adalah kode ASCII untuk huruf A
    char c1;

    printf("Karakter = %c \n", c); // A
    c1 = 'Z';
    printf("Karakter = %c \n", c1); // Z

    printf("Karakter dalam kode ASCII = %d \n", c); // 65
    printf("Karakter sebagai huruf = %c \n", c); // A
    printf("Karakter dalam kode ASCII = %d \n", c1); // 90
    printf("Karakter sebagai huruf = %c \n", c1); // Z

    return 0;
}