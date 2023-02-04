/* File: seqsearch.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Menentukan posisi dimana elemen tabel bernilai X */
#include <stdio.h>
int main() {
    int i;
    // int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    // int X=9; /* elemen yang dicari */

    int n;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int Tab[n];
    for (i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i+1);
        scanf("%d", &Tab[i]);
    }

    int X;
    printf("Masukkan elemen yang dicari: ");
    scanf("%d", &X);

    // /* Algoritma sequential search paling sederhana */
    // /* program berhenti pada indeks i dimana nilai ditemukan */
    // i = 0;
    // while ((Tab[i] != X) && (i < n-1)) {
    //     i++;
    // }
    // if (Tab[i] == X) {
    //     printf("Indeks bernilai X = %d\n", i);
    // } else {
    //     printf("X tidak ditemukan\n");
    // }

    /* Jika posisi indeks yang bernilai X lebih dari satu, maka: */
    /* Algoritma sequential search */
    /* Program berhenti hingga indeks terakhir */
    i = 0;
    int flag=0;
    while (i < n-1) {
        if (Tab[i] == X) {
            printf("Indeks bernilai X = %d\n", i);
            flag=1;
        }
        i++;
    }
    if (flag == 0) {
        printf("X tidak ditemukan\n");
    }

    /* Algoritma binary search */
    /* Hanya bekerja jika array sudah disort */
    /* Program berhenti pada indeks i dimana nilai ditemukan */
    // int L=0, R=n-1, M; /* indeks kiri, kanan, dan tengah */
    // while (L <= R) {
    //     M = (L+R)/2;
    //     if (Tab[M] == X) {
    //         printf("Indeks bernilai X = %d\n", M);
    //         L = R+1;
    //     } else if (Tab[M] < X) {
    //         L = M+1;
    //     } else {
    //         R = M-1;
    //     }
    // }
    // if (L > R) {
    //     printf("X tidak ditemukan\n");
    // }

    /* Algoritma sequential search yang efisien terhadap sorted array */
    /* Program berhenti hingga indeks terakhir */
    // i = 0;
    // while ((Tab[i] < X) && (i < n-1)) {
    //     i++;
    // }
    // if (Tab[i] == X) {
    //     printf("Indeks bernilai X = %d\n", i);
    // } else {
    //     printf("X tidak ditemukan\n");
    // }

    return 0;
}