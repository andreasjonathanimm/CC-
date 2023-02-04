/* File: beratbadan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca berat badan, menentukan apakah termasuk Kurus, Ideal, Gemuk, atau Kegemukan */
/* Kategorikan berdasarkan umur dan jenis kelamin */
#include <stdio.h>
int main() {
    int umur;
    char jenisKelamin;
    float beratBadan;

    /* Input */
    printf("Masukkan umur: ");
    scanf("%d", &umur);
    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &jenisKelamin);
    printf("Masukkan berat badan: ");
    scanf("%f", &beratBadan);

    /* Proses */
    if (jenisKelamin == 'L') {
        if (umur >= 1 && umur <= 3) {
            if (beratBadan < 10.5) {
                printf("Kurus\n");
            } else if (beratBadan >= 10.5 && beratBadan <= 14.5) {
                printf("Ideal\n");
            } else if (beratBadan > 14.5 && beratBadan <= 17.5) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else if (umur >= 4 && umur <= 10) {
            if (beratBadan < 12.5) {
                printf("Kurus\n");
            } else if (beratBadan >= 12.5 && beratBadan <= 16.5) {
                printf("Ideal\n");
            } else if (beratBadan > 16.5 && beratBadan <= 19.5) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else if (umur >= 11 && umur <= 18) {
            if (beratBadan < 15) {
                printf("Kurus\n");
            } else if (beratBadan >= 15 && beratBadan <= 19) {
                printf("Ideal\n");
            } else if (beratBadan > 19 && beratBadan <= 22) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else {
            if (beratBadan < 17) {
                printf("Kurus\n");
            } else if (beratBadan >= 17 && beratBadan <= 21) {
                printf("Ideal\n");
            } else if (beratBadan > 21 && beratBadan <= 24) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        }
    } else {
        if (umur >= 1 && umur <= 3) {
            if (beratBadan < 9.5) {
                printf("Kurus\n");
            } else if (beratBadan >= 9.5 && beratBadan <= 13.5) {
                printf("Ideal\n");
            } else if (beratBadan > 13.5 && beratBadan <= 16.5) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else if (umur >= 4 && umur <= 10) {
            if (beratBadan < 11.5) {
                printf("Kurus\n");
            } else if (beratBadan >= 11.5 && beratBadan <= 15.5) {
                printf("Ideal\n");
            } else if (beratBadan > 15.5 && beratBadan <= 18.5) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else if (umur >= 11 && umur <= 18) {
            if (beratBadan < 13) {
                printf("Kurus\n");
            } else if (beratBadan >= 13 && beratBadan <= 17) {
                printf("Ideal\n");
            } else if (beratBadan > 17 && beratBadan <= 20) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        } else {
            if (beratBadan < 15) {
                printf("Kurus\n");
            } else if (beratBadan >= 15 && beratBadan <= 19) {
                printf("Ideal\n");
            } else if (beratBadan > 19 && beratBadan <= 22) {
                printf("Gemuk\n");
            } else {
                printf("Kegemukan\n");
            }
        }
    }
    printf("Akhir program\n");
    return 0;
}