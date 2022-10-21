#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *link;
};

int count(struct node *root)
{
	if (root == NULL)
		return (0);
	return 1 + count(root->link);
}
int main()
{
	int cont = 0;
	struct node *head;
	head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current;
	current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;
		///// Method 1
	struct node *last;
	last = malloc(sizeof(struct node));
	last->data = 19;
	last->link = NULL;
	current->link = last;

	//////// Method 2

	current = malloc(sizeof(struct node));
	current->data = 19;
	current->link = NULL;
	head->link->link = current;
	cont = count(head);
	printf("%d", cont);
}