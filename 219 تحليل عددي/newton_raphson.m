function [root, n_iter] = newton_raphson(f, df, x0, tol) 
% Inputs: 
%   f - function handle of the function to be evaluated 
%   df - function handle of the derivative of the function 
%   x0 - initial guess for the root 
%   tol - tolerance for the root 
% Outputs: 
%   root - approximate root of the function 
% Iterate until the difference between two consecutive points is less than the tolerance 
n_iter = 0; 
while true 
    n_iter = n_iter + 1; 
    x1 = x0 - f(x0) / df(x0); 
    if abs(x1 - x0) < tol 
        break 
    end 
    x0 = x1; 
end 
 
root = x1; 
 
end 