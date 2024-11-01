# binomial_coefficient.py
# Function to calculate binomial coefficient using Pascal's Triangle

def binomial_coefficient(n, k):
    """
    Calculate the binomial coefficient C(n, k) using Pascal's Triangle.
    
    Parameters:
    n (int): Total number of items
    k (int): Number of items to choose
    
    Returns:
    int: Binomial coefficient C(n, k)
    """
    if k < 0 or k > n:
        return 0
    
    # Initialize Pascal's Triangle as a 2D list
    pascal_triangle = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
    
    # Construct Pascal's Triangle
    for i in range(n + 1):
        pascal_triangle[i][0] = 1  # C(i, 0) = 1
        for j in range(1, i + 1):
            pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j]
    
    return pascal_triangle[n][k]
