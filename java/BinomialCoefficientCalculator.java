// BinomialCoefficientCalculator.java
// Class to calculate binomial coefficient using Pascal's Triangle

public class BinomialCoefficientCalculator {
    
    // Method to calculate binomial coefficient C(n, k)
    public int calculate(int n, int k) {
        if (k < 0 || k > n) {
            return 0;
        }
        
        int[][] pascalTriangle = new int[n + 1][n + 1];
        
        // Construct Pascal's Triangle
        for (int i = 0; i <= n; i++) {
            pascalTriangle[i][0] = 1; // C(i, 0) = 1
            for (int j = 1; j <= i; j++) {
                pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
        }
        
        return pascalTriangle[n][k];
    }
}
