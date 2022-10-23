#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
	t_list *head = malloc(sizeof(t_list));
	int a = 1;
	head->content = &a;
	head->next = NULL;

	t_list *shead  = malloc(sizeof(t_list));
	shead->content = &a;

	head->next = shead;

	shead = malloc(sizeof(t_list));
	shead->content = &a;
	shead->next = NULL;

	head->next->next = shead;
	
	shead = malloc(sizeof(t_list));
	int b = 2;
	shead->content = &b;
	shead->next = NULL;
a=4;
	head = NULL;
	ft_lstadd_back(&head, shead);
	while(head != NULL)
	{
		printf("%d\n", *((int *)head->content));
		head = head->next;
	}

}
