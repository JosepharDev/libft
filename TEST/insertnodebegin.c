#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

void insert(struct node **head, int x)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if(*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
}
void print(struct node *head)
{
	printf("list is: ");
	while(head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
}
int main(){
	struct node *head = NULL;  // empty list
	printf("how many numbers?\n");
	int n, i, x;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("enter the numbers \n");
		scanf("%d", &x);
		insert(&head, x);
		print(head);
	}
}