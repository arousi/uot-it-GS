function [root, n_iter] = fixed_point_iteration(f,g, x0, tol) 
% Inputs: 
%   f - function handle of the function to be evaluated 
%   g - function handle of the fixed point iteration function 
%   x0 - initial guess for the root 
%   tol - tolerance for the root 
% Outputs: 
%   root - approximate root of the function 
%   n_iter - number of iterations 
 
% Iterate until the difference between two consecutive points is less than the tolerance 
n_iter = 0; 
while true 
    n_iter = n_iter + 1; 
    x1 = g(x0); 
    if abs(x1 - x0) < tol 
        break 
    end 
    x0 = x1; 
end 
 
root = x1; 
 
end 