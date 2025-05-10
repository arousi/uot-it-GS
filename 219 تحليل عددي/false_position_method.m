function [root, n_iter] = false_position_method(f, a, b, tol) 
% Inputs: 
%   f - function handle of the function to be evaluated 
%   a - left endpoint of the interval 
%   b - right endpoint of the interval 
%   tol - tolerance for the root 
% Outputs: 
%   root - approximate root of the function 
%   n_iter - number of iterations 
 
% Check if the function changes sign on the interval 
if sign(f(a)) == sign(f(b)) 
    error('Function must change sign on the interval'); 
end 
 
% Iterate until the difference between two consecutive points is less than the tolerance 
n_iter = 0; 
while true 
    n_iter = n_iter + 1; 
    c = (a * f(b) - b * f(a)) / (f(b) - f(a)); 
    if abs(f(c)) < tol 
        break 
    end 
    if sign(f(c)) == sign(f(a)) 
        a = c; 
    else 
        b = c; 
    end 
end 
 
root = c; 
 
end 