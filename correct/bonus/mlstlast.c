#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int main()
{
	t_list *head = malloc(sizeof(t_list));
	char str[] = "first";
	head->content = str;

	t_list *shead = malloc(sizeof(t_list));
	char str1[] = "last";
	shead->content = str1;
	shead->next = NULL;
	head->next = shead;


	t_list *last = ft_lstlast(head);
	printf("%s\n", last->content); 
}