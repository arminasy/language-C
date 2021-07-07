#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_EMPTY INT_MIN

typedef struct    node
{
    int           val;
    struct node   *next;
}                 node;

typedef node *stack;

void  ft_swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
}

bool    push(stack *mystack, int value)
{
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL)
        return (false);
    newnode->val = value;
    newnode->next = *mystack;
    *mystack = newnode;
    return (true);
}

int   pop(stack *mystack)
{
    if(*mystack == NULL)
        return STACK_EMPTY;
    int res = (*mystack)->val;
    node *tmp = *mystack;
    *mystack = (*mystack)->next;
    free(tmp);
    return res;
}

int    sab(node **head)
{
    node *stack;
    stack = *head;

    if(stack && stack->next)
        ft_swap(&stack->val, &stack->next->val);
    return (0);
}

int			ft_atoi(char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	while (str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		str++;
	result = 0;
	sign = (str[0] == '-' ? -1 : 1);
	str = (str[0] == '-' || str[0] == '+') ? str + 1 : str;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}


int    pab(stack *a, stack *b)
{
    stack tmp;
    stack to;
    stack from;

    to = *a;
    from = *b;
    if(!from)
        return (0);
    tmp = from;
    from = from->next;
    *b = from;
    if (!to)
    {
        to = tmp;
        to->next = NULL;
        *a = to;
    }
    else
    {
        tmp->next = to;
        *a = tmp;
    }
    return (0);
}

int rab(stack *mystack) {
    node *tmp_first;
    node *tmp_last;
    node *stack;

    stack = *mystack;
    if (!(stack && stack->next))
        return (0);
    tmp_first = stack;
    stack =  stack->next;
    tmp_last = stack;
    while (tmp_last->next)
    {
        tmp_last = tmp_last->next;
    }
    tmp_last->next = tmp_first;
    tmp_first->next = NULL;
    *mystack = stack;
    return (0);
}

int		rrab(node **head)
{
	node	*tmp_last;
	node	*previous;
	node	*stack;

	stack = *head;
	if (!(stack && stack->next))
		return (0);
	tmp_last = stack;
	while (tmp_last->next)
	{
		previous = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_last->next = stack;
	previous->next = NULL;
	*head = tmp_last;
	return (0);
}

int ss(stack *a, stack *b)
{
    sab(a);
    sab(b);
    return (0);
}

int    rr(stack *a, stack *b)
{
    rab(a);
    rab(b);
    return (0);
}

int    rrr(stack *a, stack *b)
{
    rrab(a);
    rrab(b);
    return (0);
}

int     count_of_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
        return (0);
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return (count);
}

void  do_three(stack n)
{

  if(n->val > n->next->val && n->val < n->next->next->val && n->next->val < n->next->next->val)
    sab(&n);
  else if(n->val > n->next->val && n->val > n->next->next->val && n->next->val > n->next->next->val)
  {
    sab(&n);
    rrab(&n);
  }
}

int main(int argc, char **argv)
{
  int m;
  int i = 1;
  stack a = NULL;
  stack b = NULL;
  if(argc > 1)
  {
    while(i < argc)
    {
      push(&a, ft_atoi(argv[i]));
      rab(&a);
      i++;
    }
  }
  if(count_of_nodes(a) < 4)
  {
    do_three(a);
  }
  while((m = pop(&a)) != STACK_EMPTY)
  {
    printf("%d\n", m);
  }
  free(a);
  free(b);
  return (0);
}
