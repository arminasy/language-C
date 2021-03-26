#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node *next;
}node;

void	printlist(node* n)
{
	while(n != NULL)
	{
		printf(" %d ", n->val);
		n = n->next;
	}
}

int main(void)
{
	node *head;
	node *second;
	node *third;
  node *fourth;

	head = (node *)malloc(sizeof(node));
	second = (node *)malloc(sizeof(node));
	third = (node *)malloc(sizeof(node));
  fourth = (node *)malloc(sizeof(node));

	head->val = 1;
	head->next = second;

	second->val = 2;
	second->next = third;

	fourth->val = 4;
	fourth->next = NULL;

  third->val = 3;
  third->next = fourth;

	printlist(head);
}
