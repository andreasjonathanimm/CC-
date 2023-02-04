/* File: IF_bulanan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh IF lebih dari tiga kasus */
/* Membaca sebuah nilai integer */
/* kemudian menuliskan nama bulan berdasarkan nilai integer */
/* misal, 0='Januari', 1="Februari", 2="Maret", dll. */
#include <stdio.h>
int main ()
{
    int a;
    
    printf("Contoh IF lebih dari tiga kasus\n");
    printf("Ketikkan sebuah nilai integer: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Januari\n");
    }
    else if (a == 1)
    {
        printf("Februari\n");
    }
    else if (a == 2)
    {
        printf("Maret\n");
    }
    else if (a == 3)
    {
        printf("April\n");
    }
    else if (a == 4)
    {
        printf("Mei\n");
    }
    else if (a == 5)
    {
        printf("Juni\n");
    }
    else if (a == 6)
    {
        printf("Juli\n");
    }
    else if (a == 7)
    {
        printf("Agustus\n");
    }
    else if (a == 8)
    {
        printf("September\n");
    }
    else if (a == 9)
    {
        printf("Oktober\n");
    }
    else if (a == 10)
    {
        printf("November\n");
    }
    else if (a == 11)
    {
        printf("Desember\n");
    }
    else
    {
        printf("Nilai tidak valid\n");
    }
    
    return 0;
}