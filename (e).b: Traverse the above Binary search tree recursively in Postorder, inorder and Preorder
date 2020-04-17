#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node * lchild;
    int data;
    struct node * rchild;
}*root=NULL;
struct node * Rinsert(struct node * p, char key)
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
void inorder(struct node * p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%c\t",p->data);
        inorder(p->rchild);

    }
}

void preorder(struct node * p)
{
    if(p)
    {
        printf("%c\t",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void postorder(struct node * p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%c\t",p->data);
    }
}

int main()
{
    struct node * temp;
    root = Rinsert(root,'D');
    Rinsert(root,'A');
    Rinsert(root,'C');
    Rinsert(root,'B');
    Rinsert(root,'E');
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}

