#include<stdio.h>
#include<stdlib.h>
#define MS 5
typedef struct {
    int arr[MS];
    int top;

} stack;
void init(stack *s)
{
    s->top = -1;
}
void push( stack *s, int x)
{
    if (s->top == MS -1)
    {
        printf("jyada hoshiyaar hai kya !!\n");
        return;
    }
    s->top++;
    s->arr[s->top]=x;
}
void display(stack*s)
{
    for(int i=0;i<=s->top;i++)
    {
        printf("%d",s->arr[i]);
    }
    printf("\n");
}
void pop(stack *s)
{
    if(s->top ==-1)
    {
        printf("underflow\n");
        return;
    }
    --s->top;
}
int getsize(stack *s)
{
    int size=s->top+1;
    return size;
}
int main()
{
    stack s;
    init(&s);
    push(&s,10);
    display(&s);

    push(&s,20);
    display(&s);
    push(&s,30);
    display(&s);
    push(&s,40);
    display(&s);
    printf("size--->%d",getsize(&s));
    display(&s);
    push(&s,50);
    display(&s);
    push(&s,60);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
}