# binomial_coefficient.rb
# Function to calculate the binomial coefficient C(n, k) using Pascal's Triangle

class BinomialCoefficient
  def self.calculate(n, k)
    return 0 if k < 0 || k > n

    # Initialize Pascal's Triangle
    pascal_triangle = Array.new(n + 1) { Array.new(n + 1, 0) }

    # Build Pascal's Triangle
    (0..n).each do |i|
      pascal_triangle[i][0] = 1 # C(i, 0) = 1
      (1..i).each do |j|
        pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j]
      end
    end

    # Return the binomial coefficient
    pascal_triangle[n][k]
  end
end
