/* File: tabel2.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mendefinisikan array dan mengisi nilainya dari input yang dibaca */
#include <stdio.h>
int main() {
    int Tab[5];
    int i;

    for (i = 0; i < 5; i++) {
        // mengisi tabel dengan input
        scanf("%d", &Tab[i]);

        // mengisi tabel dengan assignment
        // Tab[i] = i+1;

        // mengisi tabel dengan inisialisasi
        // int Tab[i] = {1, 2, 3, 4, 5};
    }

    /* Menuliskan isi Tab berderet ke kanan */
    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d ;", i, Tab[i]);
    }
    printf("\n");

    return 0;
}