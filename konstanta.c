/* File : konstanta.c */
/* Penulis : Jonathan Immanuel */
/* Deskripsi: */
/* Mendefinisikan konstanta bertipe int, float, dan char */
#include <stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 7 // ??
#define PI 100.5 // ??
int main() {
    const int maks=3;
    const float param = 2.5;
    const char cc = 65;
    const char cA = 'A';
    // SATU = 1; // error: cannot assign to variable 'SATU' with const-qualified type 'const int'
    // PI = 3.14; // error: cannot assign to variable 'PI' with const-qualified type 'const float'

    printf("PI = %6.2f \n", PI); // 3.14
    printf("NOL = %d \n", NOL); // 0
    printf("SATU = %d \n", SATU); // 1
    printf("FALSE = %d \n", FALSE); // 0
    printf("maks = %d \n", maks); // 3
    printf("param = %f \n", param); // 2.500000
    printf("cc = %c \n", cc); // A
    printf("cA = %c \n", cA); // A
    printf("3\n"); // not using name, not recommended
    return 0;
}