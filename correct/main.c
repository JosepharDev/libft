#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
int main()
{
	int d = 222;
	t_list *head = malloc(sizeof(t_list));
	head->content =&d;

	t_list *shead = malloc(sizeof(t_list));
	shead->content = &d;

	head->next = shead;
	shead = malloc(sizeof(t_list));
	shead->content =&d;
	shead->next = NULL;
	head->next->next = shead;

	t_list *backnode = malloc(sizeof(t_list));

	backnode->content = &d;
	backnode->next = NULL;
	ft_lstadd_back(&head, backnode);
	
	while(head != NULL)
	{
		printf("%d\n", *((int *)head->content));
		head = head->next;
	}
}
 