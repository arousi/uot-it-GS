function [p, n_iter] = lagrange_interpolation(x, y, x0) 
% Inputs: 
%   x - vector of x-values 
%   y - vector of y-values 
%   x0 - point at which to interpolate 
% Outputs: 
%   p - approximate value of f(x0) 
%   n_iter - number of iterations 
 
n = length(x); 
p = 0; 
for i = 1:n 
    L = 1; 
    for j = 1:n 
        if j ~= i 
            L = L * (x0 - x(j)) / (x(i) - x(j)); 
        end 
    end 
    p = p + y(i) * L; 
end 
 
n_iter = n; 
 
end 