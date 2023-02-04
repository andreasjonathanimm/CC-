/* File: med.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mencari nilai median dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int med;
    int temp;
    int j;

    // pengurutan tabel dengan bubble sort
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (Tab[i] > Tab[j]) {
                temp = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = temp;
            }
        }
    }

    // menuliskan median dari tabel
    med = Tab[4];
    printf("Nilai median = %d\n", med);

    return 0;
}