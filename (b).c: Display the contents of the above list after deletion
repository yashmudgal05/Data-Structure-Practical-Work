#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node * prev;
    int data;
    struct node * next;
}*first=NULL;
void create(int A[],int n);
void display(struct node * p);
int length(struct node * p);
int Delete(struct node * p, int index);

int main()
{
    int A[] = {10,20,30,40,50};

    create(A,5);
    Delete(first,2);
    display(first);

    return 0;
}
void create(int A[],int n)
{
    struct node * t, * last;
    int i;

    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display(struct node * p)
{
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}

int length(struct node * p)
{
    int l=0;

    while(p != NULL)
    {
        l++;
        p = p->next;
    }
    return(l);
}

int Delete(struct node * p, int index)
{
    struct node * q;
    int i,x;

    if(index<1 || index>length(first))
    {
        return 0;
    }

    if(index == 1)                          
    {
        first = first->next;
        if(first)
        {
            first->prev = NULL;
        }
        x = p->data;
        free(p);
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        free(p);
    }
    return(x);
}




