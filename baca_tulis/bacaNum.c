/* File: bacaNum.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh membaca nilai numerik: bilangan bulat, bilangan riil */
/* kemudian menuliskan nilai yang dibaca */
#include <stdio.h>
int main ()
{
    int a;
    float x;

    printf("Contoh membaca dan menulis, ketik nilai integer: ");
    scanf("%d", &a);
    printf("Nilai yang dibaca: %d \n", a);

    printf("Ketik nilai sebuah bilangan riil: ");
    scanf("%f", &x);
    printf("Nilai yang dibaca: %f \n", x);

    return 0;
}