/* File: increment.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Efek dari operator ++ */
#include <stdio.h>
int main ()
{
    int i;

    i = 3;
    printf("Nilai i :%d %d\n", i, i++);
    i = 3;
    printf("%d\n", ++i);

    i = 3;
    printf("%d\n", --i);

    return 0;
}