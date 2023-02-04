/* File: initvar.c */
/* Penulis: Jonathan Immanuel */
/* Mengisi variabel i yang bertipe int dengan nilai 5 dan menuliskannya */
#include <stdio.h>
int main() {
    int i;
    int j = 3;
    int k = "5";
    int bebek = 10; /* bebekku ada 10 */
    float luas = 2.5; /* luas kebunku 2.5 hektar */
    float keliling = 2 * 3.14 * 5.5; /* keliling dari sebuah lingkaran yang jari-jarinya 5.5 */
    printf("Ini nilai i : %d \n", i);
    printf("Ini nilai j : %d \n", j);
    printf("Ini nilai k : %d \n", k);
    printf("Ini nilai bebek : %d \n", bebek);
    printf("Ini nilai luas : %f \n", luas);
    printf("Ini nilai keliling : %f \n", keliling);
    return 0;
}