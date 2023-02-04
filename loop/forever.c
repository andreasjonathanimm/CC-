/* File: forever.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Loop terus menerus, akan sering dipakai untuk program menunggu event */
#include <stdio.h>
int main() {
    char ch;

    printf("Program akan looping, akhiri dengan Ctrl-C\n");
    while (1) { /* atau for (;;)*/
        printf("Tunggu ^c....\n");
        /* program akan terus menerus dijalankan, sampai diinterupsi */
        /* cara interupsi adalah dengan menekan tombol [Ctrl] dan tombol "c" bersamaan */

        /* Menangani tombol/kunci bukan interupsi */
        scanf("%c", &ch);
    }
    return 0;
}