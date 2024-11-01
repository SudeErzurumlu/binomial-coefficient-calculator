# example_usage.rb
# Example usage of the BinomialCoefficient class

require_relative 'binomial_coefficient'

# Parameters for binomial coefficient
n = 5
k = 2

# Calculate the binomial coefficient
result = BinomialCoefficient.calculate(n, k)

# Display the result
puts "Binomial coefficient C(#{n}, #{k}) is: #{result}"
