/* File: mathTest.c */
/* Penulis: Jonathan Immanuel */
/* Deskripsi: */
/* Pemakaian standard library untuk matematika */
#include <stdio.h>
#include <math.h>
int main() {
    /* math library functions */
    printf("sqrt(9) = %f\n", sqrt(9)); // 3
    printf("pow(2,3) = %f\n", pow(2,3)); // 8
    printf("exp(1) = %f\n", exp(1)); // 2.718281828459045
    printf("log(2.718281828459045) = %f\n", log(2.718281828459045)); // 1
    printf("log10(100) = %f\n", log10(100)); // 2
    printf("fabs(-10.5) = %f\n", fabs(-10.5)); // 10.5
    printf("ceil(10.5) = %f\n", ceil(10.5)); // 11
    printf("floor(10.5) = %f\n", floor(10.5)); // 10
    printf("fmod(10.5,3) = %f\n", fmod(10.5,3)); // 1.5
    printf("sin(0) = %f\n", sin(0)); // 0
    printf("cos(0) = %f\n", cos(0)); // 1
    printf("tan(0) = %f\n", tan(0)); // 0
    printf("asin(0) = %f\n", asin(0)); // 0
    printf("acos(0) = %f\n", acos(0)); // 1.570796326794897
    printf("atan(0) = %f\n", atan(0)); // 0
    printf("atan2(0,1) = %f\n", atan2(0,1)); // 0
    printf("sinh(0) = %f\n", sinh(0)); // 0
    printf("cosh(0) = %f\n", cosh(0)); // 1
    printf("tanh(0) = %f\n", tanh(0)); // 0
    printf("asinh(0) = %f\n", asinh(0)); // 0
    printf("acosh(1) = %f\n", acosh(1)); // 0
    printf("atanh(0) = %f\n", atanh(0)); // 0
    return 0;
}