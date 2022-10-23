#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void del(void *content)
{
	free(content);
}

int main()
{
	t_list *head = malloc(sizeof(t_list));
	head->next = NULL;
	char str[] = "hello";
	head->content = malloc(sizeof(str));

	ft_lstdelone(head, &del);
}