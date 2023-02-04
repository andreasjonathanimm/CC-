/* File: timeTest.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Pemakaian standard library untuk waktu */
#include <stdio.h>
#include <time.h>
int main() {
    /* time library functions */
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Waktu saat ini: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    return 0;
}