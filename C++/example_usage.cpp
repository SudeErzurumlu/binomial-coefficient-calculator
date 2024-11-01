// example_usage.cpp
// Example usage of the Binomial Coefficient Calculator

#include <iostream>
#include "BinomialCoefficientCalculator.h"

int main() {
    BinomialCoefficientCalculator calculator;
    
    int n = 5;
    int k = 2;
    
    int result = calculator.calculate(n, k);
    
    std::cout << "Binomial coefficient C(" << n << ", " << k << ") is: " << result << std::endl;
    
    return 0;
}
