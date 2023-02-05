/* File: penguranganBerderetPecahanPuluhan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat penjumlahan dan pengurangan selang-seling berderet pecahan puluhan dengan perulangan */
#include <stdio.h>
int alternatingFractionalSum(int n) {
    int i;
    float sum = 1;
    for (i = 2; i <= n; i++) {
        if (i % 2 == 1) {
            sum += 1.0 / (i * 10);
        } else {
            sum -= 1.0 / (i * 10);
        }
    }
    return sum;
}

int main() {
    int n;
    
    printf("Masukkan jumlah penjumlahan dan pengurangan: ");
    scanf("%d", &n);

    printf("Hasil penjumlahan dan pengurangan: %f\n", alternatingFractionalSum(n));
    return 0;
}