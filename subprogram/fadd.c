/* File: fadd.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Fungsi yang menjumlahkan a+b */
#include <stdio.h>
int add(int a, int b) {
    /* fungsi bernama add yang menerima dua integer yaitu a dan b*/
    /* dan mengembalikan hasil penjumlahan a+b */
    return a+b;
}

int inkrement(int a) {
    /* mengirimkan nilai a yang sudah ditambah 1, nilai a tidak berubah */
    return a+1;
}

int main() {
    int x=10;
    int y=25;
    /* pemakaian/pemanggilan fungsi add*/
    printf("Hasil penjumlahan x+y = %d\n", add(x,y));
    printf("Hasil penjumlaha 3+2 = %d\n", add(3,2));

    /* pemakaian/pemanggilan fungsi inkrement */
    printf("nilai x : %d\n", x);
    printf("nilai x setelah ditambah 1 : %d\n", inkrement(x));
    printf("nilai 5 setelah ditambah 1 : %d\n", inkrement(5));

    return 0;
}