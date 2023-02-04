/* File: IF_ELSE_IF.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* contoh pemakaian IF tiga kasus */
/* Membaca sebuah nilai */
/* menuliskan 'Nilai a positif, nilai a', jika a > 0 */
/*            'Nilai a Nol, nilai a', jika a = 0 */
/*            'Nilai a negatif, nilai a', jika a < 0 */
#include <stdio.h>
int main ()
{
    int a;
    
    printf("Contoh IF tiga kasus\n");
    printf("Ketikkan sebuah nilai integer: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Nilai a positif, nilai a = %d\n", a);
    }
    else if (a == 0)
    {
        printf("Nilai a Nol, nilai a = %d\n", a);
    }
    // if (a < 0)
    else
    {
        printf("Nilai a negatif, nilai a = %d\n", a);
    }
    return 0;
}