/* File: doWHILE.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* print "Saya senang" sebanyak 3 kali */
#include <stdio.h>
int main ()
{
    int i =0;
    int n;

    printf("Banyak perulangan: ");
    scanf("%d", &n);

    do
    {
        printf("Saya senang belajar bahasa C\n");
        i++;
    } while (i < n);

    return 0;
}