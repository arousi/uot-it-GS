function [p, n_iter] = cubic_spline_interpolation(x, y, x0) 
% Inputs: 
%   x - vector of x-values 
%   y - vector of y-values 
%   x0 - point at which to interpolate 
% Outputs: 
%   p - approximate value of f(x0) 
%   n_iter - number of iterations 
 
n = length(x); 
h = diff(x); 
delta = diff(y) ./ h; 
A = zeros(n); 
B = zeros(n, 1); 
 
A(1,1) = 1; 
A(n,n) = 1; 
for i = 2:n-1 
    A(i,i-1) = h(i-1); 
    A(i,i) = 2 * (h(i-1) + h(i)); 
    A(i,i+1) = h(i); 
    B(i) = 3 * (delta(i) * h(i-1) + delta(i-1) * h(i)); 
end 
 
c = A \ B; 
b = delta - c(1:n-1) .* h; 
d = (c(2:n) - c(1:n-1)) ./ (3 * h); 
 
% Find the interval containing x0 
k = find(x0 >= x, 1, 'last'); 
 
p = y(k) + b(k) * (x0 - x(k)) + c(k) * (x0 - x(k))^2 + d(k) * (x0 - x(k))^3; 
 
n_iter = n; 
 
end 