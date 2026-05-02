#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;

}node;
node* init(int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d  ", root->data);
    inorder(root->right);
}
int search(node* root, int x)
{
    while(root!=NULL)
    {
        if(x==root->data)
        {
            return 1;
        }
        else if(x<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return 0;
}
int search_r(node* root, int x)
{
    if(root==NULL)
    {
        return 0;
    }
    if(x==root->data)
    {
        return 1;
    }
    else if(x<root->data)
    {
        return search_r(root->left, x);
    }
    else
    {
        return search_r(root->right, x);
    }
}
node* insert(node* root, int x)
{
    node* c=root;
    node* parent=NULL;
    while(c!=NULL)
    {
        if(x==c->data)
        {
            return root;
        }
        else if(x<c->data)
        {
            parent=c;
            c=c->left;
        }
        else
        {
            parent=c;
            c=c->right;
        }
    }
    if(x<parent->data)
    {
        parent->left=init(x);
    }
    else
    {
        parent->right=init(x);
    }
    return root;
}
int main()
{
    node* root=init(40);
    node* das=init(10);
    node* bees=init(20);
    node* tees=init(30);
    node* pachas=init(50);
    node* saath=init(60);
    node* sattar=init(70);
    root->left=bees;
    bees->left=das;
    bees->right=tees;
    root->right=saath;
    saath->left=pachas;
    saath->right=sattar;
    inorder(root);
    // printf("%d  ", search(root, 170));
    // printf("%d  ", search_r(root, 170));
    root=insert(root, 34);
    printf("\n");

    inorder(root);

}