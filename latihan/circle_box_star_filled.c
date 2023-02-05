/* File: circle_box_star_filled.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membuat kotak bulat-bulat terisi dengan bintang di dalamnya */
#include <stdio.h>
void circleBoxStarFilled(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        int j;
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("o");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    int i;
    
    printf("Masukkan jumlah kotak bulat-bulat: ");
    scanf("%d", &n);

    circleBoxStarFilled(n);
    return 0;
}