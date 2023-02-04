/* File: bakteriEksponensial.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca jumlah bakteri awal, menghitung jumlah bakteri setelah 1 jam, 2 jam, ..., n jam */
#include <stdio.h>
int main() {
    int n, i;
    int jumlahBakteriAwal;
    int jumlahBakteri;

    /* Input */
    printf("Masukkan jumlah bakteri awal: ");
    scanf("%d", &jumlahBakteriAwal);
    printf("Masukkan jumlah jam: ");
    scanf("%d", &n);

    /* Proses */
    jumlahBakteri = jumlahBakteriAwal;
    for (i = 1; i <= n; i++) {
        jumlahBakteri = jumlahBakteri * 2;
        printf("Jumlah bakteri setelah %d jam: %d\n", i, jumlahBakteri);
    }
    printf("Akhir program\n");
    return 0;
}