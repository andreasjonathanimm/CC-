/* File: aritmatika.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Operasi aritmatika bilangan integer dan bilangan riil: */
/* Menuliskan jumlah, hasil perkalian, pembagian, modulo dua buah variabel integer*/
#include <stdio.h>
int main () {
    int x=5;
    int y=8;

    printf("Ini nilai x + y: %d\n", x+y);
    printf("Ini nilai x - y: %d\n", x-y);
    printf("Ini nilai x * y: %d\n", x*y);
    printf("Ini nilai x / y: %d\n", x/y);
    printf("Ini nilai y / x: %d\n", y/x);
    printf("Ini nilai x %% y: %d\n", x%y);

    float a = 5, b = 8;
    printf("Ini nilai a / b: %f\n", a/b);
    printf("Ini nilai b / a: %f\n", b/a);

    printf("Ini nilai x+x+x: %d\n", x+x+x);
    printf("Ini nilai x*x+x: %d\n", x*x+x);

    return 0;
}