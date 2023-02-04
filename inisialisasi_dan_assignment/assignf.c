/* File : assignf.c */
/* Penulis: Jonathan Immanuel */
/* Mengisi variabel f yang bertipe float dengan nilai 0.555 dan menuliskannya */
#include <stdio.h>
int main ()
{
    float f = 0.555;
    float x = 1.5E3;
    int y = 5.555;

    printf("Ini nilai f : %f \n", f); // 0.555
    printf("Ini nilai f : %5.2f \n", f); // 0.56
    printf("Ini nilai x : %10.2f \n", x); // 1500.00
    printf("Ini nilai y : %d \n", y); // 5

    return 0;
}