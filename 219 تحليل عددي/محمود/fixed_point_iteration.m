
function [ m , i , ea ] = fixed_point_iteration (i , maxit , error)
f=@(m) (1-m^3)/3;
%fplot('exp(-m)',[-100 100])
%grid on

 old_value=f(i); %function of Xo
 
while (1)
    
    new_value=f(old_value); %function of old_value
    ea=abs(new_value-old_value)/new_value*100 ;
    old_value=new_value;
    
    
    if(ea<error) || (i==maxit) ; break ; end
    i=i+1;

end
m=new_value;
i=i+2;
display (m) ; display (i) ; display (ea);

end

