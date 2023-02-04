/* File: for.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* print "Saya senang" sebanyak 3 kali */
#include <stdio.h>
int main ()
{
    int i;
    int n;

    printf("Banyak perulangan: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("Saya senang belajar bahasa C\n");
    }

    // example for to while
    // int i = 0;
    // int n;
    //
    // printf("Banyak perulangan: ");
    // scanf("%d", &n);
    //
    // while (i < n)
    // {
    //     printf("Saya senang belajar bahasa C\n");
    //     i++;
    // }

    // example for to do while
    // int i = 0;
    // int n;
    //
    // printf("Banyak perulangan: ");
    // scanf("%d", &n);
    //
    // do
    // {
    //     printf("Saya senang belajar bahasa C\n");
    //     i++;
    // } while (i < n);
    
    return 0;
}