/* File: proc.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Contoh program utama dan prosedur untuk menukar 2 buah nilai */
#include <stdio.h>

void plus1 (int *a) {
    /* prosedur menambahkan 1 ke parameter a */
    /* "*a" artinya isi dari lokasi yang ditunjuk oleh a */
    *a = *a + 1;
}

void plusd(int *a, int d) {
    /* prosedur menambahkan d ke parameter a */
    /* nilai a akan diubah, sedangkan nilai d tidak berubah*/
    *a = *a + d;
}

void swap(int *a, int *b) {
    /* prosedur menukar nilai a dan b */
    /* "*a" isi dari lokasi a */
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i = 9;
    int x=10;
    int y=25;
    int d=7;

    plus1(&i); /* perhatikan saat pemanggilan &i */
    printf("nilai i+1 = %d", i);

    i=8;
    plusd(&i, d); /* perhatikan saat pemanggilan &i dan d */
    printf("nilai i+d = %d", i);

    plusd(&d, 3); /* perhatikan saat pemanggilan &d dan 3 */
    printf("nilai d+3 = %d", d);

    printf("nilai x dan y sebelum swap = %d, %d", x, y);
    swap(&x, &y); /* perhatikan saat pemanggilan &x dan &y */
    printf("nilai x dan y setelah swap = %d, %d", x, y);

    return 0;
}