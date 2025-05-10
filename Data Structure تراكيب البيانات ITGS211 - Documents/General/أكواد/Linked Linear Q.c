#include <stdio.h>



//Declaration of Queue
typedef struct queue
{
    int front;
    int rear;
    int info;
    struct queue *next;
}Queue;


void init(Queue **q)
{
    q->rear  = -1;
    q->front =  0;
}


//To check Queue is empty or not
int isEmpty(Queue **q)
{
    int empty=0;

    if( q->front == q->rear+1 )
        empty = 1;

    return empty;
}

//Insert item into queue
void insertQueue(Queue **q,int item)
{
    if( isEmpty(q) )
    {
        printf("\nQueue Empty");
    }

    q->info= item;
    printf("\nInserted item : %d",item);
}

//Delete item from queue
int deleteQueue(Queue **q, int item)
{
    if( isEmpty(q) )
    {
        printf("\nQueue Underflow");
        return -1;
    }
    item = q->info;
    return 0;
}

int main()
{
    int item = 0;
    Queue q;

    init(&q);

    insertQueue(&q,10);
    insertQueue(&q,20);
    insertQueue(&q,30);
    insertQueue(&q,40);
    insertQueue(&q,50);
    insertQueue(&q,60);

    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);

    printf("\n");
    return 0;
}
