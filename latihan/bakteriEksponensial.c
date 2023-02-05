/* File: bakteriEksponensial.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca jumlah bakteri awal, menghitung jumlah bakteri setelah 1 jam, 2 jam, ..., n jam */
#include <stdio.h>

int eksponensial(int x, int n) {
    int i;
    int result = 1;
    for (i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int n, i;
    int jumlahBakteri;

    /* Input */
    printf("Masukkan jumlah bakteri awal: ");
    scanf("%d", &jumlahBakteri);
    printf("Masukkan jumlah jam: ");
    scanf("%d", &n);

    /* Proses */
    for (i = 1; i <= n; i++) {
        jumlahBakteri = jumlahBakteri * eksponensial(2, i);
        printf("Jumlah bakteri setelah %d jam adalah %d\n", i, jumlahBakteri);
    }
    printf("Akhir program\n");
    return 0;
}