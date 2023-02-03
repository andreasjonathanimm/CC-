/* File: gabungan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh perbandingan nilai boolean dan numerik */
#include <stdio.h>
int main() {
    int uang = 6000;
    int hujan = 0;
    int payung=1;
    printf("uang>5000 dan tidak hujan dan payung: %d \n", uang>5000 && (!hujan || payung));

    uang = 6000;
    hujan = 1;
    payung=1;
    printf("uang>5000 dan tidak hujan dan payung: %d \n", uang>5000 && (!hujan || payung));

    return 0;
}