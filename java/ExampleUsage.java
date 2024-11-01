// ExampleUsage.java
// Example usage of the BinomialCoefficientCalculator class

public class ExampleUsage {
    public static void main(String[] args) {
        BinomialCoefficientCalculator calculator = new BinomialCoefficientCalculator();
        
        int n = 5;
        int k = 2;
        
        int result = calculator.calculate(n, k);
        
        System.out.println("Binomial coefficient C(" + n + ", " + k + ") is: " + result);
    }
}
