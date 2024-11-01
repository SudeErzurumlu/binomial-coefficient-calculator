% binomial_coefficient.m
% Function to calculate the binomial coefficient C(n, k) using Pascal's Triangle

function coeff = binomial_coefficient(n, k)
    % Input:
    %   n - Total number of items
    %   k - Number of items to choose
    % Output:
    %   coeff - Binomial coefficient C(n, k)
    
    if k < 0 || k > n
        coeff = 0;
        return;
    end
    
    % Initialize Pascal's Triangle
    pascal_triangle = zeros(n + 1, n + 1);
    
    % Construct Pascal's Triangle
    for i = 0:n
        pascal_triangle(i + 1, 1) = 1; % C(i, 0) = 1
        for j = 2:i + 1
            pascal_triangle(i + 1, j) = pascal_triangle(i, j - 1) + pascal_triangle(i, j);
        end
    end
    
    % Return the binomial coefficient
    coeff = pascal_triangle(n + 1, k + 1);
end
