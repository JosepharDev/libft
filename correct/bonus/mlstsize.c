#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
	t_list *head = malloc(sizeof(t_list));
	t_list *shead = malloc(sizeof(t_list));
	head->next = shead;
	shead = malloc(sizeof(t_list));
	head->next->next = shead;
	shead = malloc(sizeof(t_list));
	shead->next = NULL;
	head->next->next->next = shead;
	printf("%d\n", ft_lstsize(head));
}