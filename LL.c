#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *init(int x)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void display(node *head)
{
    node *c = head;
    while (c)
    {
        printf("%d ", c->data);
        c = c->next;
    }
    printf("\n");
}
node *insert_b(node *head, int x)
{
    node *temp = init(x);
    temp->next = head;
    return temp;
}
node *insert_l(node *head, int x)
{
    node *temp = init(x);
    node *c = head;
    while (c->next != NULL)
    {
        c = c->next;
    }
    c->next = temp;
    return head;
}
node *insert_p(node *head, int x, int pos)
{
    node *c = head;
    node *temp = init(x);
    for (int i = 1; i <= pos - 2; i++)
    {
        c = c->next;
    }
    temp->next = c->next;
    c->next = temp;
    return head;
}
node* delete_b(node* head)
{
    node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
node* delete_l(node* head)
{
    node* c=head;
    while(c->next->next!=NULL)
    {
        c=c->next;
    }
    node* temp=c->next;
    c->next=NULL;
    free(temp);
    return head;
}
node* delete_p(node* head, int pos)
{
    node* c=head;
    for(int i=1;i<=pos-2;i++)
    {
        c=c->next;
    }
    node* temp=c->next;
    c->next=c->next->next;
    free(temp);
    return head;
}
int main()
{
    node *head = init(10);
    node *f = init(20);
    node *s = init(30);
    node *t = init(40);
    head->next = f;
    f->next = s;
    s->next = t;
    display(head);
    head = insert_b(head, 99);
    display(head);
    head = insert_l(head, 999);
    display(head);
    head = insert_p(head, 100, 4);
    display(head);
    head = delete_b(head);
    display(head);
    head = delete_l(head);
    display(head);
    // head = delete_p(head, 3);
    // display(head);
}