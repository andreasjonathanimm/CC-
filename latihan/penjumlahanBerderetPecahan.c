/* File: penjumlahanBerderetPecahan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat penjumlahan berderet pecahan menggunakan perulangan */
#include <stdio.h>
int fractionSequenceSum(int n) {
    int i;
    float sum = 0;
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    int i;
    float sum = 0;
    
    printf("Masukkan jumlah penjumlahan: ");
    scanf("%d", &n);

    printf("Hasil penjumlahan: %f\n", fractionSequenceSum(n));
    return 0;
}