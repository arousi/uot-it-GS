///stack code

#include<stdlib.h>
#include<stdio.h>
#define MAX  5

    typedef struct{
        int Arr[MAX];
        int Top;
    }Stack;

   /* void initStack(Stack *stack1){
        stack1->Top = -1;
    }*/

    void createstack(Stack **PStack1)
{       printf("Stack Initilized");
        PStack1->Top = -1;
}


     int peek(Stack **PStack1){
         printf("\nValue is: %d", PStack1->Arr[PStack1->Top]);
        return PStack1->Arr[PStack1->Top];
    }

    int isFull(Stack **PStack1){
        if(PStack1->Top==MAX-1){
            printf("\nStack is Empty");
            return 1;
        }
        else{
            printf("\nStack is Empty");
            return 0;
            }
    }

    int isEmpty(Stack **PStack1){
        if(PStack1->Top==-1){
            printf("\nStack is Empty");
            return 1;
        }
        else{
            printf("\nERROR, value of TOP is %d", PStack1->Top);
            return 0;
        }

    }

    int push(Stack **PStack1, int data){
        printf("\nEntered Push Func: %d", data);
        if(PStack1->Top == MAX-1){   ///check if its full
            printf("\nStack is Full");
            return 0;   ///fail
        }
        else{
            PStack1->Top++;  ///add 1 to the Top pointer of the stack
            PStack1->Arr[PStack1->Top]=data;     ///make the index stack->Top=data inputted
            return 1;   ///success
        }
    }

    void pop(Stack **PStack1){
         if(PStack1->Top==-1) // Testing if the Stack is Emptyفاضي المكدس إذا اختبار
         printf("Stack is Empty");
         else
         PStack1->Top--;
    }


int main(){

    Stack *PStack1;

    createstack(&PStack1);


    push(&PStack1 , 1);
    push(&PStack1 , 2);
    push(&PStack1 , 3);
    push(&PStack1 , 4);
    push(&PStack1 , 5);
    ///push(&PStack1 , 6);

    peek(&PStack1);
    pop(&PStack1);
    peek(&PStack1);
    /*push(&PStack1 , 7);
    push(&PStack1 , 8);
    push(&PStack1 , 9);
    push(&PStack1 , 10);*/







    return 0;
}



