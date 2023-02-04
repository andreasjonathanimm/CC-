/* File: IF_harian.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh IF lebih dari tiga kasus */
/* Membaca sebuah nilai integer */
/* kemudian menuliskan nama hari berdasarkan nilai integer */
/* misal, 0='Minggu', 1="Senin", 2="Selasa", dll. */
#include <stdio.h>
int main ()
{
    int a;
    
    printf("Contoh IF lebih dari tiga kasus\n");
    printf("Ketikkan sebuah nilai integer: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Minggu\n");
    }
    else if (a == 1)
    {
        printf("Senin\n");
    }
    else if (a == 2)
    {
        printf("Selasa\n");
    }
    else if (a == 3)
    {
        printf("Rabu\n");
    }
    else if (a == 4)
    {
        printf("Kamis\n");
    }
    else if (a == 5)
    {
        printf("Jumat\n");
    }
    else if (a == 6)
    {
        printf("Sabtu\n");
    }
    else
    {
        printf("Nilai a tidak valid\n");
    }
    
    return 0;
}