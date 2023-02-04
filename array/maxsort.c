/* File: maxsort.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mengurutkan elemen tabel dengan metode maximum sort*/
#include <stdio.h>
int main() {
    int i;
    // int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int max; /* indeks di mana Tab[max] bernilai maksimum */
    int k, temp; /* variabel kerja*/

    int n;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int Tab[n];
    for (i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i+1);
        scanf("%d", &Tab[i]);
    }

    /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar*/
    for (i = 0; i < n-1; i++) {
        /* Tentukan indeks max, dimana Tab[max] bernilai maksimum */
        /* untuk indeks tabel i..n */
        max = i;
        for (k = i+1; k < n; k++) {
            if (Tab[k] > Tab[max]) {
                max=k;
            }
        }

        /* Tukar nilai Tab[max] dengan Tab[i]*/
        temp = Tab[i];
        Tab[i] = Tab[max];
        Tab[max] = temp;
    }

    /* Algoritma maximum sort menaik, indeks paling kecil berisi nilai paling kecil */
    // for (i = 0; i < n-1; i++) {
    //     /* Tentukan indeks max, dimana Tab[max] bernilai maksimum */
    //     /* untuk indeks tabel i..n */
    //     max = i;
    //     for (k = i+1; k < n; k++) {
    //         if (Tab[k] < Tab[max]) {
    //             max=k;
    //         }
    //     }
    //
    //     /* Tukar nilai Tab[max] dengan Tab[i]*/
    //     temp = Tab[i];
    //     Tab[i] = Tab[max];
    //     Tab[max] = temp;
    // }

    /* Algoritma bubble sort menaik, indeks paling kecil berisi nilai paling kecil */
    // for (i = 0; i < n-1; i++) {
    //     for (k = i+1; k < n; k++) {
    //         if (Tab[k] < Tab[i]) {
    //             temp = Tab[i];
    //             Tab[i] = Tab[k];
    //             Tab[k] = temp;
    //         }
    //     }
    // }

    /* Algoritma Quick sort menaik, indeks paling kecil berisi nilai paling kecil */
    // int quicksort(int Tab[], int kiri, int kanan) {
    //     int i, j, pivot, temp;
    //     i = kiri;
    //     j = kanan;
    //     pivot = Tab[(kiri+kanan)/2];
    //     while (i <= j) {
    //         while (Tab[i] < pivot) {
    //             i++;
    //         }
    //         while (Tab[j] > pivot) {
    //             j--;
    //         }
    //         if (i <= j) {
    //             temp = Tab[i];
    //             Tab[i] = Tab[j];
    //             Tab[j] = temp;
    //             i++;
    //             j--;
    //         }
    //     }
    //     if (kiri < j) {
    //         quicksort(Tab, kiri, j);
    //     }
    //     if (i < kanan) {
    //         quicksort(Tab, i, kanan);
    //     }
    // }
    // quicksort(Tab, 0, n-1);

    // menuliskan tabel yang telah diurutkan
    for (i = 0; i < 10; i++) {
        printf(" %d ;", Tab[i]);
    }
    printf("\n");

    return 0;
}