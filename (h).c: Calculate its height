#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node * lchild;
    int data;
    struct node * rchild;
}*root=NULL;
struct node * Rinsert(struct node * p, int key)
{
    struct node * t = NULL;

    if(p == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key < p->data)
    {
        p->lchild = Rinsert(p->lchild, key);
    }
    else if(key > p->data)
    {
        p->rchild =  Rinsert(p->rchild, key);
    }

    return p;
}
int height(struct node * p)
{
    int x,y;

    if(p == NULL)
    {
        return 0;
    }
    x = height(p->lchild);
    y = height(p->rchild);
    return( x>y ? x+1:y+1);
}
int main()
{
    struct node * temp;
    root = Rinsert(root,50);
    Rinsert(root,10);
    Rinsert(root,40);
    Rinsert(root,20);
    Rinsert(root,30);

    height(root);

    return 0;
}
