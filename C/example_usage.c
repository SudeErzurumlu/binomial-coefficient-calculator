// example_usage.c
// Example usage of the binomial_coefficient function

#include <stdio.h>
#include "binomial_coefficient.h"

int main() {
    int n = 5;
    int k = 2;

    int result = binomial_coefficient(n, k);

    printf("Binomial coefficient C(%d, %d) is: %d\n", n, k, result);

    return 0;
}
