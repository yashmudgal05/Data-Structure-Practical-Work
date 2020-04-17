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
int count(struct node * p)                                    
{
    if(p == NULL )
    {
        return 0;
    }
    if(p->lchild == NULL && p->rchild == NULL)
    {
        return(count(p->lchild) + count(p->rchild) + 1);
    }
    else
    {
        return(count(p->lchild) + count(p->rchild));
    }
}

int count1(struct node * p)                                          
{
    if(p == NULL )
    {
        return 0;
    }
    if(p->lchild != NULL || p->rchild != NULL)
    {
        return(count1(p->lchild) + count1(p->rchild) + 1);
    }
    else
    {
        return(count1(p->lchild) + count1(p->rchild));
    }
}

int main()
{
    root = Rcreate();
    preorder(root);

    printf("\n\n");
    printf("leaf nodes are nodes : %d\n",count(root));
    printf("\nnon-leaf nodes are nodes : %d\n",count1(root));

    return 0;
}
