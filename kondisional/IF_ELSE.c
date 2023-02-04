/* File: IF_ELSE.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh pemakaian IF dua kasus komplementer*/
/* Membaca sebuah nilai, */
/* menuliskan 'Nilai a positif, nilai a', jika a >= 0 */
/* menuliskan 'Nilai a negatif, nilai a', jika a < 0 */
#include <stdio.h>
int main ()
{
    int a;

    printf("Contoh IF dua kasus\n");
    printf("Ketikkan sebuah nilai integer: ");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("Nilai a positif, nilai a = %d\n", a);
    }
    // if (a < 0)
    else
    {
        printf("Nilai a negatif, nilai a = %d\n", a);
    }
    return 0;
}