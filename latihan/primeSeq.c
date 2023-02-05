/* File: primeSeq.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Mencetak sequence bilangan prima dengan perulangan */
#include <stdio.h>
void primeSeq(int n) {
    int i;
    for (i = 2; i <= n; i++) {
        int j;
        int isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 100;

    primeSeq(n);
    return 0;
}