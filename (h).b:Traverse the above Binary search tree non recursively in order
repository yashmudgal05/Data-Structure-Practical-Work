#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
struct node
{
    struct node * lchild;
    int data;
    struct node * rchild;
}*root=NULL;
void insert(int key)
{
    struct node * t;
    t = root;
    struct node *r=NULL,*p;

    if(root == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }

    while(t != NULL)
    {
        r = t;
        if(key < t->data)
        {
            t = t->lchild;
        }
        else if(key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }
    }
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lchild = p->rchild = NULL;

        if(key < r->data)
        {
            r->lchild = p;
        }
        else
        {
            r->rchild = p;
        }
}

void inorder(struct node * p)
{
    struct stack stk;
    stackcreate(&stk,100);

    while(p || !isemptystack(stk))
    {
        if(p)
        {
            push(&stk,p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            printf("%d\t",p->data);
            p = p->rchild;
        }
    }
}

int main()
{
    struct node * temp;
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    
    inorder(root);
    return 0;
}

