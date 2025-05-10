
function [m , i , ea] = bisection_function (i, xl , xr , maxit , error)
f=@(m) exp(-m);
fplot('exp(-m)',[-10 10])
grid on
while(1)
    c=(xl+xr)/2;
    if f(xl)*f(c)>0 ; xl=c ; end  % Any Function With Blue Headed Must be ended with "end" Statement
    if f(xl)*f(c)<0 ; xr=c ; end
    c_old=c;
    c=(xl+xr)/2; %New Value of C
    i=i+1;
    ea=abs((c-c_old/c)*100); % 
    display('    xl     xr     c')
    array=[xl,xr,c]       
    if ea==error || i==maxit ;
        break
    end
end
m=c;
display(m) ; display(i) ; display(ea) ;
end

