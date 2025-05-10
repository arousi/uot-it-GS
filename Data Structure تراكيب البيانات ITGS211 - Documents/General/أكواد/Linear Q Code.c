#include<stdio.h>
#define Capacity 10
///Linear Q

typedef struct LQ_Node{
    int front;
    int rear;
    int info;
    struct LQ_Node *next;

}Make_LQ;

void CreatQ(Make_LQ *LQ1){
    printf("\nQ Created, front & rear =-1\n");
    LQ1->front = LQ1->rear = -1;
}

void DQ(Make_LQ *LQ1){
    printf("\nEntered DeQ\n");
    if(LQ1->front == LQ1->rear){///Q is Empty
        LQ1->front = LQ1->rear = -1;
        printf("Front = %d, rear = %d\n", LQ1->front, LQ1->rear);
    }
    else{///DeQueue
        LQ1->front++;
        printf("Front = %d\n", LQ1->front);
    }
}

int peek(Make_LQ *LQ1){
    printf("\nPeek-front- : %d\n", LQ1->Arr[LQ1->front]);
    printf("Peek-rear- : %d\n", LQ1->Arr[LQ1->rear]);
    return (LQ1->Arr[LQ1->front]);
}

void EnQ(Make_LQ *LQ1 , int item){
    if((LQ1->front == -1) && (LQ1->rear == -1)){///Empty Q
        printf("\nLinear Q is Empty\n");
        LQ1->front = 0;
    }
    if((LQ1->front==0) && (LQ1->rear==Capacity-1)){///Full Q
        printf("\nLinear Q is Full\n");
        exit(0);
    }
    if((LQ1->front>0) && (LQ1->rear==Capacity-1)){///Q needs push forward after DQs
        printf("\nQ needs push forward after DQs\n");
        for(int i = LQ1->front; i<=LQ1->rear ;i++){///pushing elements forward
            LQ1->Arr[i-LQ1->front] = LQ1->Arr[i];
        }
        LQ1->rear = LQ1->rear - LQ1->front;///Re valuaing front and rear to have front 0 rear last element
        LQ1->front=0;
    }
    LQ1->rear++;///Add item
    LQ1->Arr[LQ1->rear] = item;
    printf("Item Enqued is: %d\n",LQ1->Arr[LQ1->rear] );
    printf("front = %d, rear = \n", LQ1->front, LQ1->rear);
}




int main(){

    Make_LQ *LQ1;
    CreatQ(&LQ1);

    EnQ(&LQ1, 0);
    peek(&LQ1);
    EnQ(&LQ1, 1);
    peek(&LQ1);
    EnQ(&LQ1, 2);
    peek(&LQ1);
    EnQ(&LQ1, 3);
    peek(&LQ1);
    EnQ(&LQ1, 4);
    peek(&LQ1);
    EnQ(&LQ1, 5);
    peek(&LQ1);
    EnQ(&LQ1, 6);
    peek(&LQ1);
    EnQ(&LQ1, 7);
    peek(&LQ1);
    EnQ(&LQ1, 8);
    peek(&LQ1);
    EnQ(&LQ1, 9);
    peek(&LQ1);

    DQ(&LQ1);
    peek(&LQ1);
    DQ(&LQ1);
    peek(&LQ1);
    DQ(&LQ1);
    peek(&LQ1);
    DQ(&LQ1);
    peek(&LQ1);
    DQ(&LQ1);
    peek(&LQ1);
    DQ(&LQ1);
    peek(&LQ1);

    EnQ(&LQ1 ,0 );
    peek(&LQ1);
    EnQ(&LQ1 ,1 );
    peek(&LQ1);
    EnQ(&LQ1 ,2 );
    peek(&LQ1);





    return 0;
}
