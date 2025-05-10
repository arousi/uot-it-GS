
function [ m , i , ea  ] = newton_raphson (i , maxit , error)
%newton raphson is much faster than the other methods

f=@(m) exp(-m)-m;
derive=@(m) -exp(-m)-1;

fplot('exp(-m)',[-100 100])
grid on


old_value=i;
up=f(i);
down=derive(i);
new_value=old_value-(up/down);
while(1)
    ea=((new_value-old_value)/new_value)*100;
    up=f(new_value);
    down=derive(new_value);
    old_value=new_value;
    new_value=old_value-(up/down);
    i=i+1;
    if (ea<error) || (i==maxit) ; break ; end
    
end
m=new_value;
display (m) ; display (i) ; display (ea);
end