function [p, n_iter] = newton_forward_interpolation(x, y, x0) 
% Inputs: 
%   x - vector of x-values 
%   y - vector of y-values 
%   x0 - point at which to interpolate 
% Outputs: 
%   p - approximate value of f(x0) 
%   n_iter - number of iterations 
 
n = length(x); 
d = zeros(n); 
d(:,1) = y; 
for j = 2:n 
    for i = j:n 
        d(i,j) = (d(i,j-1) - d(i-1,j-1)) / (x(i) - x(i-j+1)); 
    end 
end 
 
p = d(1,1); 
for j = 1:n-1 
    term = 1; 
    for i = 1:j 
        term = term * (x0 - x(i)); 
    end 
    p = p + d(1,j+1) * term; 
end 
 
n_iter = n; 
 
end 