#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>


int main(){

    printf("Hi.\nThis is NA homework for Sanad Alarousi.\nPlease select the wanted method:\n");
    do{
        printf("Root Finding:\n1)Drawing\n2)Fixed Point Iteration\n3)Bisection\n4)Newton Raphson\n5)False Poision\n\n");
        printf("Interpolation and extrapolation:\na)Newton Forward\nb)Newton Backwards\nc)Lagrange Method\nd)Splines\n\n");

        int MethodInput=0;
        scanf("%d\n",&MethodInput);

        for(int exit=0 ; exit==0 ; ){
            if(MethodInput==1){
                ///Drawing here
            }
            else if(MethodInput==2){
                ///Fixed Point Iteration here
                char FixedPoinFuncInput=0;
                printf("Enter your function:\n");
                scanf("%s",&FixedPoinFuncInput);
            }
            else if(MethodInput==3){
                ///Bisection here
            }
            else if(MethodInput==4){
                ///Newton Raphson here
            }
            else if(MethodInput==5){
                ///False Postion here
            }
            ///interpolaion extrapolation
            else if(MethodInput==a){
                ///Newton Forward here
            }
            else if(MethodInput==b){
                ///Newton Backward here
            }
            else if(MethodInput==c){
                ///Lagrange here
            }
            else if(MethodInput==d){
                ///Splines here
            }
            ///wrong input
            else{
                printf("Input out of option range, exiting now");
                exit=1;
            }
        }
    }while(exit==0)
    printf("Inputted Exit code, Exiting\n");


    return 0;
}
