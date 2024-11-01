// BinomialCoefficientCalculator.cpp
// Implementation of the Binomial Coefficient Calculator using Pascal's Triangle

#include "BinomialCoefficientCalculator.h"
#include <vector>

int BinomialCoefficientCalculator::calculate(int n, int k) {
    if (k < 0 || k > n) return 0;
    
    std::vector<std::vector<int>> pascalTriangle(n + 1, std::vector<int>(n + 1, 0));
    
    // Construct Pascal's Triangle
    for (int i = 0; i <= n; ++i) {
        pascalTriangle[i][0] = 1;
        for (int j = 1; j <= i; ++j) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }
    
    return pascalTriangle[n][k];
}
