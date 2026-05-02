#include <stdio.h>
#define MS 3
typedef struct queue
{
    int arr[MS];
    int front;
    int rear;
} queue;
void init(queue *q)
{
    q->front = -1;
    q->rear = -1;
}
void push(queue *q, int x)
{
    if (q->rear == MS - 1)
    {
        printf(" Jyada hosiyaar hai kya!!\n");
        return;
    }
    if (q->front == -1 && q->rear == -1)
    {
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->rear] = x;
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = x;
    }
}
void pop(queue *q)
{
    if (q->front == -1)
    {
        printf(" Underflow\n");
        return;
    }
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = q->front + 1;
    }
}
void display(queue *q)
{
    if(q->front==-1 && q->rear==-1)
    {
        return;
    }
    
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}
int main()
{
    queue q;
    init(&q);
    push(&q, 10);
    display(&q);
    push(&q, 20);
    display(&q);
    push(&q, 30);
    display(&q);
    // push(&q, 40);
    // display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    
}