/* File: bacaKar.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca nilai karakter dan menuliskannya */
#include <stdio.h>
int main ()
{
    char c;
    char cc;

    printf("Hello\n");
    printf("Baca 1 karakter saja : ");scanf("%c ", &cc);
    printf("%c\n", cc);
    printf("Baca 1 karakter saja : ");scanf("%d", &c);
    printf("%d\n", c);

    scanf("%c %c", &c, &cc);
    printf("%c %c\n", c, cc);

    return 0;
}