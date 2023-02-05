/* File: penjumlahanBerderet.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat penjumlahan berderet dengan perulangan */
#include <stdio.h>
int sequenceSum(int n) {
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    int i;
    int sum = 0;
    
    printf("Masukkan jumlah penjumlahan: ");
    scanf("%d", &n);

    printf("Hasil penjumlahan: %d\n", sequenceSum(n));
    return 0;
}