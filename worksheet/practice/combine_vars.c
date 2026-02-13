#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main( void ) {

    double d = 1.0/3.0;
    float f = 2.3;
    int k = -7;

    // you can verify sums by comparing to a calculator

    // compute and print d/k as a double to 16 d.p.
    // compute and print f-d as a double to 16 d.p.
    // compute and print f-d as a float to 16 d.p.
    // compute and print k+d as a double to 16 d.p.

    printf("%.16f\n", d / k);
    printf("%.16f\n", f - d);
    printf("%.16f\n", (float)(f - d));
    printf("%.16f\n", k + d);

    return 0;
}