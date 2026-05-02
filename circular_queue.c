#include <stdio.h>
#define MS 4
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
    if ((q->front == 0 && q->rear == MS - 1) || (q->front == q->rear + 1))
    {
        printf(" Jyada hosiyaar hai kya!!\n");
        return;
    }
    if (q->front == -1 && q->rear == -1)
    {
        q->front = (q->front + 1) % MS;
        q->rear = (q->rear + 1) % MS;
    }
    else
    {
        q->rear = (q->rear + 1) % MS;
    }
    q->arr[q->rear] = x;
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
        return;
    }

    q->front = (q->front + 1) % MS;
}
void display(queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    // if (q->front <= q->rear)
    // {
    //     for (int i = q->front; i <= q->rear; i++)
    //     {
    //         printf("%d ", q->arr[i]);
    //     }
    //     printf("\n");
    // }

    // else
    // {

    //     for (int i = MS - 1; i >= q->front; i--)
    //     {
    //         printf("%d ", q->arr[i]);
    //     }

    //     // 0 to rear
    //     for (int i = q->rear; i >= 0; i--)
    //     {
    //         printf("%d ", q->arr[i]);
    //     }
    //     printf("\n");
    // }

    for(int i=q->front;i!=q->rear;)
    {
        printf("%d ", q->arr[i]);
        i=(i+1)%MS;

    }
    printf("%d ", q->arr[q->rear]);
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
    push(&q, 40);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    push(&q, 50);
    display(&q);
    push(&q, 60);
    display(&q);
    push(&q, 70);
    display(&q);
}