#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
}*top=NULL;

void push(int x);
char pop();
int pre(char x);
int isoperand(char x);
char * InfixToPostfix(char * infix);
int main()
{
    char * infix = "a+b*c-d/e";                                
    push(' ');                                                 
    char * postfix;

    postfix = InfixToPostfix(infix);

    printf("%s",postfix);

    return 0;
}

void push(int x)
{
    struct node * t;
    t = (struct node *)malloc(sizeof(struct node));

    if(t == NULL)
    {
        printf("stack is full");
    }
    else
    {
       t->data = x;
       t->next = top;
       top = t;
    }
}

char pop()
{
    int x;
    struct node * p;
    if(top == NULL)
    {
        printf("stack is empty");
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return(x);
}

int pre(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    else if(x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isoperand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char * InfixToPostfix(char * infix)
{
    int i=0, j=0;
    char * postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 1)*sizeof(char));

    while(infix[i]!='\0')
    {
        if(isoperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while(top != NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return(postfix);
}
