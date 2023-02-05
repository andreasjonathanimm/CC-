/* File: beratbadan.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Membaca berat badan, menentukan apakah termasuk Kurus, Ideal, Gemuk, atau Kegemukan */
/* Kategorikan berdasarkan umur dan jenis kelamin */
#include <stdio.h>
char kategoriBeratBadan(int umur, char jenisKelamin, float beratBadan) {
    if (jenisKelamin == 'L') {
        if (umur >= 1 && umur <= 3) {
            if (beratBadan < 10.5) {
                return "Kurus";
            } else if (beratBadan >= 10.5 && beratBadan <= 14.5) {
                return "Ideal";
            } else if (beratBadan > 14.5 && beratBadan <= 17.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else if (umur >= 4 && umur <= 10) {
            if (beratBadan < 12.5) {
                return "Kurus";
            } else if (beratBadan >= 12.5 && beratBadan <= 16.5) {
                return "Ideal";
            } else if (beratBadan > 16.5 && beratBadan <= 19.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else if (umur >= 11 && umur <= 18) {
            if (beratBadan < 15) {
                return "Kurus";
            } else if (beratBadan >= 15 && beratBadan <= 18.5) {
                return "Ideal";
            } else if (beratBadan > 18.5 && beratBadan <= 22.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else {
            if (beratBadan < 17) {
                return "Kurus";
            } else if (beratBadan >= 17 && beratBadan <= 21.5) {
                return "Ideal";
            } else if (beratBadan > 21.5 && beratBadan <= 25.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        }
    } else {
        if (umur >= 1 && umur <= 3) {
            if (beratBadan < 9.5) {
                return "Kurus";
            } else if (beratBadan >= 9.5 && beratBadan <= 13.5) {
                return "Ideal";
            } else if (beratBadan > 13.5 && beratBadan <= 16.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else if (umur >= 4 && umur <= 10) {
            if (beratBadan < 11.5) {
                return "Kurus";
            } else if (beratBadan >= 11.5 && beratBadan <= 15.5) {
                return "Ideal";
            } else if (beratBadan > 15.5 && beratBadan <= 18.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else if (umur >= 11 && umur <= 18) {
            if (beratBadan < 13.5) {
                return "Kurus";
            } else if (beratBadan >= 13.5 && beratBadan <= 17.5) {
                return "Ideal";
            } else if (beratBadan > 17.5 && beratBadan <= 20.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        } else {
            if (beratBadan < 15.5) {
                return "Kurus";
            } else if (beratBadan >= 15.5 && beratBadan <= 19.5) {
                return "Ideal";
            } else if (beratBadan > 19.5 && beratBadan <= 22.5) {
                return "Gemuk";
            } else {
                return "Kegemukan";
            }
        }
    }
}

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
    char kategori = kategoriBeratBadan(umur, jenisKelamin, beratBadan);
    printf("Kategori berat badan: %s", kategori);
    printf("Akhir program\n");
    return 0;
}