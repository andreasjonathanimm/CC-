/* File: penjumlahanBerderetGanjil.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat penjumlahan berderet ganjil dengan perulangan */
#include <stdio.h>
int oddSequenceSum(int n) {
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }
    return sum;
}

int main() {
    int n;
    int i;
    int sum = 0;
    
    printf("Masukkan jumlah penjumlahan berderet ganjil: ");
    scanf("%d", &n);

    printf("Hasil penjumlahan berderet ganjil adalah %d\n", oddSequenceSum(n));
    return 0;
}