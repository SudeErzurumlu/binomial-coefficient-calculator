// binomial_coefficient.c
// Implementation of the binomial coefficient calculation using Pascal's Triangle

#include "binomial_coefficient.h"
#include <stdio.h>

int binomial_coefficient(int n, int k) {
    if (k < 0 || k > n) return 0;

    int pascal_triangle[n + 1][n + 1];

    // Construct Pascal's Triangle
    for (int i = 0; i <= n; ++i) {
        pascal_triangle[i][0] = 1; // C(i, 0) = 1
        for (int j = 1; j <= i; ++j) {
            pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
        }
    }

    return pascal_triangle[n][k];
}
