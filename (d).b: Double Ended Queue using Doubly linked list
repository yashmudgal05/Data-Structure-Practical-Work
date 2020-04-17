#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node * prev;
    int data;
    struct node * next;
}*front=NULL,*rear=NULL;
void enqueRear(int x);
void enqueFront(int x);
int dequeRear();
int dequeFront();
void display();
void enqueRear(int x)
{
      struct node * t;
      t = (struct node *)malloc(sizeof(struct node));

      if(t==NULL)
      {
          printf("queue is full");
      }
      else
      {
          t->data = x;
          if(front == NULL)
          {
              t->prev = t->next = NULL;
              front = rear = t;
          }
          else
          {
              t->prev = rear;
              t->next = NULL;
              rear->next = t;
              rear = t;
          }
      }
}
void enqueFront(int x)
{
      struct node * t;
      t = (struct node *)malloc(sizeof(struct node));

      if(t==NULL)
      {
          printf("queue is full");
      }
      else
      {
          t->data = x;
          if(front == NULL)
          {
              t->prev = t->next = NULL;
              front = rear = t;
          }
          else
          {
              t->prev = NULL;
              t->next = front;
              front->prev = t;
              front = t;
          }
      }
}
int dequeFront()
{
     int x=-1;
     struct node * t;

     if(front == NULL)
     {
         printf("queue is empty");
     }
     else
     {
         x = front->data;
         t = front;
         front = front->next;
         front->prev = NULL;
         free(t);
     }
     return(x);
}
int dequeRear()
{
     int x=-1;
     struct node * p = front;
     struct node * t;

     if(front == NULL)
     {
         printf("queue is empty");
     }
     else
     {
         while(p->next != rear)
         {
             p = p->next;
         }
         x = rear->data;
         t = rear;
         p->next = NULL;
         rear = p;
         free(t);
     }
     return(x);
}

void display()
{
     struct node * p;
     p = front;
     while(p!=NULL)
     {
         printf("%d\t",p->data);
         p = p->next;
     }
     printf("\n");
}

int main()
{
    enqueRear(10);
    enqueRear(20);
    enqueRear(30);
    enqueRear(40);

    display();

    enqueFront(60);
    enqueFront(70);
    enqueFront(80);

    display();

    printf("\n%d",dequeFront());
    printf("\n%d",dequeFront());
    printf("\n%d\n",dequeFront());

    printf("\n%d",dequeRear());
    printf("\n%d",dequeRear());
    printf("\n%d",dequeRear());

    return 0;
}





















