#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node * lchild;
    int data;
    struct node * rchild;
}*root=NULL;
void preorder(struct node * p)
{
    if(p)
    {
        printf("%d\t",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
struct node * Rcreate()
{
    int x;
    static int flag = 0;
    struct node * t;

    if(flag == 0)
    {
        printf("enter node data : ");
        flag ++;
    }
    scanf("%d",&x);

    if(x == -1)
    {
        return NULL;
    }

    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->lchild = t->rchild = NULL;

    printf("enter left child of %d : ",t->data);
    t->lchild = Rcreate();

    printf("enter right child of %d : ",t->data);
    t->rchild = Rcreate();

    return t;
}
int count(struct node * root)                                        
{
    if(root)
    {
        return (count(root->lchild) + count(root->rchild) + 1);
    }
    return 0;
}

int main()
{
    root = Rcreate();
    preorder(root);
    printf("\n\n");
    printf("nodes are : %d\n",count(root));
    return 0;
}
