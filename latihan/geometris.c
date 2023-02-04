/* File: geometris.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Memilih bentuk geometris */
/* Memasukkan data besaran untuk menghitung luas dan kelilingnya (beserta volume jika berbentuk tiga dimensi) */
/* Melakukan perhitungan sesuai rumus */
/* Mencetak ciri bentuk geometris dan menuliskan luas dan kelilingnya */

#include <stdio.h>
int main()
{
    int pilihan;
    float p, l, r, s1, s2, s3, s4, sisi, alas, tinggi, jariJari, luas, keliling, volume;
    const float PI = 3.1415;

    while (pilihan != 14)
    {
        /* Input */
        printf("Pilih bentuk geometris:\n");
        printf("1. Persegi\n");
        printf("2. Persegi panjang\n");
        printf("3. Lingkaran\n");
        printf("4. Segitiga\n");
        printf("5. Jajar genjang\n");
        printf("6. Trapesium\n");
        printf("7. Belah ketupat\n");
        printf("8. Layang-layang\n");
        printf("9. Kubus\n");
        printf("10. Balok\n");
        printf("11. Tabung\n");
        printf("12. Kerucut\n");
        printf("13. Bola\n");
        printf("14. Stop\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        /* Proses */
        switch (pilihan)
        {
        case 1:
            printf("Masukkan sisi: ");
            scanf("%f", &sisi);
            luas = sisi * sisi;
            keliling = 4 * sisi;
            printf("Ciri bentuk geometris: persegi\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 2:
            printf("Masukkan panjang: ");
            scanf("%f", &p);
            printf("Masukkan lebar: ");
            scanf("%f", &l);
            luas = p * l;
            keliling = 2 * (p + l);
            printf("Ciri bentuk geometris: persegi panjang\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 3:
            printf("Masukkan jari-jari: ");
            scanf("%f", &jariJari);
            luas = PI * jariJari * jariJari;
            keliling = 2 * PI * jariJari;
            printf("Ciri bentuk geometris: lingkaran\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 4:
            printf("Masukkan alas: ");
            scanf("%f", &alas);
            printf("Masukkan tinggi: ");
            scanf("%f", &tinggi);
            printf("Masukkan sisi 1: ");
            scanf("%f", &s1);
            printf("Masukkan sisi 2: ");
            scanf("%f", &s2);
            printf("Masukkan sisi 3: ");
            scanf("%f", &s3);
            luas = 0.5 * alas * tinggi;
            keliling = s1 + s2 + s3;
            printf("Ciri bentuk geometris: segitiga\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 5:
            printf("Masukkan alas: ");
            scanf("%f", &alas);
            printf("Masukkan tinggi: ");
            scanf("%f", &tinggi);
            printf("Masukkan sisi: ");
            scanf("%f", &sisi);
            luas = alas * tinggi;
            keliling = 2 * (alas + sisi);
            printf("Ciri bentuk geometris: jajar genjang\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 6:
            printf("Masukkan sisi 1: ");
            scanf("%f", &s1);
            printf("Masukkan sisi 2: ");
            scanf("%f", &s2);
            printf("Masukkan sisi 3: ");
            scanf("%f", &s3);
            printf("Masukkan sisi 4: ");
            scanf("%f", &s4);
            printf("Masukkan tinggi: ");
            scanf("%f", &tinggi);
            luas = 0.5 * (s1 + s2) * tinggi;
            keliling = s1 + s2 + s3 + s4;
            printf("Ciri bentuk geometris: trapesium\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 7:
            printf("Masukkan diagonal 1: ");
            scanf("%f", &s1);
            printf("Masukkan diagonal 2: ");
            scanf("%f", &s2);
            printf("Masukkan sisi: ");
            scanf("%f", &sisi);
            luas = 0.5 * s1 * s2;
            keliling = 4 * sisi;
            printf("Ciri bentuk geometris: belah ketupat\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            break;
        case 8:
            printf("Masukkan diagonal 1: ");
            scanf("%f", &s1);
            printf("Masukkan diagonal 2: ");
            scanf("%f", &s2);
            printf("Masukkan sisi 1: ");
            scanf("%f", &s3);
            printf("Masukkan sisi 2: ");
            scanf("%f", &s4);
            luas = 0.5 * s1 * s2;
            keliling = s3 + s3 + s4 + s4;
            printf("Ciri bentuk geometris: layang-layang\n");
            printf("Luas: %f\n", luas);
            break;
        case 9:
            printf("Masukkan sisi: ");
            scanf("%f", &sisi);
            luas = 6 * sisi * sisi;
            keliling = 12 * sisi;
            volume = sisi * sisi * sisi;
            printf("Ciri bentuk geometris: kubus\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            printf("Volume: %f\n", volume);
            break;
        case 10:
            printf("Masukkan panjang: ");
            scanf("%f", &p);
            printf("Masukkan lebar: ");
            scanf("%f", &l);
            printf("Masukkan tinggi: ");
            scanf("%f", &tinggi);
            luas = 2 * (p * l + p * tinggi + l * tinggi);
            keliling = 4 * (p + l + tinggi);
            volume = p * l * tinggi;
            printf("Ciri bentuk geometris: balok\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            printf("Volume: %f\n", volume);
            break;
        case 11:
            printf("Masukkan jari-jari: ");
            scanf("%f", &jariJari);
            printf("Masukkan tinggi: ");
            scanf("%f", &tinggi);
            luas = 2 * PI * jariJari * (jariJari + tinggi);
            keliling = 2 * PI * jariJari + 2 * tinggi;
            volume = 0.33 * PI * jariJari * jariJari * tinggi;
            printf("Ciri bentuk geometris: tabung\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            printf("Volume: %f\n", volume);
            break;
        case 12:
            printf("Masukkan jari-jari: ");
            scanf("%f", &jariJari);
            printf("Masukkan sisi: ");
            scanf("%f", &sisi);
            luas = 2 * PI * jariJari * (jariJari + sisi);
            keliling = 2 * PI * jariJari;
            volume = PI * jariJari * jariJari * sisi;
            printf("Ciri bentuk geometris: kerucut\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            printf("Volume: %f\n", volume);
            break;
        case 13:
            printf("Masukkan jari-jari: ");
            scanf("%f", &jariJari);
            luas = 4 * PI * jariJari * jariJari;
            keliling = 4 * PI * jariJari;
            volume = 4 * 0.33 * PI * jariJari * jariJari * jariJari;
            printf("Ciri bentuk geometris: bola\n");
            printf("Luas: %f\n", luas);
            printf("Keliling: %f\n", keliling);
            printf("Volume: %f\n", volume);
            break;
        default:
            printf("Pilihan tidak tersedia\n");
        }
    }
    printf("Terima kasih telah menggunakan program ini\n");
    return 0;
}