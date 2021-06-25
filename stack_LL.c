#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_EMPTY INT_MIN

typedef struct node
{
    int val;
    struct node *next;
}   node;

typedef node *stack;

bool     push(stack *mystack, int value)
{
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL)
        return (false);
    newnode->val = value;
    newnode->next = *mystack;
    *mystack = newnode;
    return (true);
}

int pop(stack *mystack)
{

    if(*mystack == NULL)
        return STACK_EMPTY;
    int res = (*mystack)->val;
    node *tmp = *mystack;
    *mystack = (*mystack)->next;
    free(tmp);
    return res;
}

void    sa(stack *mystack)
{
    if(*mystack == NULL)
        return (STACK_EMPTY);
}

int main()
{
    stack A = NULL;
    stack B = NULL;


    int t;

    while((t = pop(&A)) != STACK_EMPTY) 
    {
        printf("%d\n", t);
    }
}
