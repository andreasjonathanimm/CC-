/* File: faktorialMaxInt.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat hasil faktorial kurang dari 3267 dengan perulangan, yang dimana N terbesar dicetak */
#include <stdio.h>
int faktorialMaxInt() {
    int i;
    int n = 1;
    int sum = 1;
    while (sum < 3267) {
        sum *= n;
        n++;
    }
    return n - 1;
}

int main() {
    printf("N terbesar adalah %d\n", faktorialMaxInt());
    return 0;
}