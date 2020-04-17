#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * s;                                    
};
void create(struct stack * st);                                
void display(struct stack st);
void push(struct stack * st, int x);
int pop(struct stack * st);
int peek(struct stack st, int index);
int isempty(struct stack st);
int isfull(struct stack st);
int stacktop(struct stack st);

int main()
{
    struct stack st;
    create(&st);

    push(&st,5);
    push(&st,10);
    push(&st,15);
    push(&st,20);
    push(&st,25);
    printf("\n%d\n",pop(&st));

    display(st);

    printf("\n%d\n",peek(st,2));
    printf("\n%d\n",isempty(st));
    printf("\n%d\n",isfull(st));
    printf("\n%d\n",stacktop(st));

    return 0;
}

void create(struct stack * st)
{
    printf("enter size : ");
    scanf("%d",&st->size);
    st->top = -1;

    st->s = (int *)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d\t",st.s[i]);
    }
}

void push(struct stack * st, int x)
{
    if(st->top == st->size-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack * st)
{
    int x = -1;
    if(st->top == -1)
    {
        printf("stack underflow");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return(x);
}

int peek(struct stack st, int index)
{
    int x = -1;

    if(st.top-index+1 < 0)
    {
        printf("invalid index");
    }
    x = st.s[st.top-index+1];

    return(x);
}

int isempty(struct stack st)
{
    if(st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack st)
{
    if(st.top == st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int stacktop(struct stack st)
{
    if(st.top == -1)
    {
        return -1;
    }
    else
    {
        return(st.s[st.top]);
    }
}
