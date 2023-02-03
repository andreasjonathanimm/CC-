/* File: boolOP.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh perhitungan aljabar boolean, perhatikan cara penulisan AND dan OR serta NOT */
#include <stdio.h>
int main ()
{
    int TRUE = 1;
    int FALSE = 0;

    printf("Ini nilai TRUE AND TRUE : %d \n", TRUE && TRUE);
    printf("Ini nilai TRUE AND FALSE : %d \n", TRUE && FALSE);
    printf("Ini nilai TRUE OR FALSE : %d \n", TRUE || FALSE);
    printf("Ini nilai FALSE OR FALSE : %d \n", FALSE || FALSE);
    printf("Ini nilai NOT TRUE : %d \n", !TRUE);
    printf("Ini nilai NOT FALSE : %d \n", !FALSE);

    printf("----------\n");
    printf("OR T F\n");
    printf("T T T\n");
    printf("F T F\n");
    printf("----------\n");

    printf("----------\n");
    printf("OR T F\n");
    printf("T %d %d\n", TRUE || TRUE, TRUE || FALSE);
    printf("F %d %d\n", FALSE || TRUE, FALSE || FALSE);
    printf("----------\n");

    printf("----------\n");
    printf("AND T F\n");
    printf("T T T\n");
    printf("F F F\n");
    printf("----------\n");

    printf("----------\n");
    printf("AND T F\n");
    printf("T %d %d\n", TRUE && TRUE, TRUE && FALSE);
    printf("F %d %d\n", FALSE && TRUE, FALSE && FALSE);
    printf("----------\n");

    printf("----------\n");
    printf("NOT T F\n");
    printf("F T\n");
    printf("----------\n");

    printf("----------\n");
    printf("NOT T F\n");
    printf("%d %d\n", !TRUE, !FALSE);
    printf("----------\n");

    return 0;
}