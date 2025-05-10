function [root, n_iter] = drawing_method(f, a, b, tol) 
% Inputs: 
%   f - function handle of the function to be evaluated 
%   a - left endpoint of the interval 
%   b - right endpoint of the interval 
%   tol - tolerance for the root 
% Outputs: 
%   root - approximate root of the function 
%   n_iter - number of iterations 
 
% Plot the function 
x = linspace(a, b, 100); 
y = f(x); 
plot(x, y); 
grid on; 
xlabel('x'); 
ylabel('f(x)'); 
title('Root-finding by drawing method'); 
 
% Wait for the user to click on the plot to specify a root estimate 
disp('Click on the plot to specify a root estimate'); 
[x0,~] = ginput(1); 
 
% Iterate until the difference between two consecutive points is less than the tolerance 
n_iter = 0; 
while true 
    n_iter = n_iter + 1; 
    x1 = f(x0); 
    plot([x0 x0], [0 f(x0)], 'r--'); 
    plot([x0 x1], [f(x0) f(x1)], 'b'); 
    if abs(x1 - x0) < tol 
        break 
    end 
    x0 = x1; 
end 
 
root = x1; 
 
end 