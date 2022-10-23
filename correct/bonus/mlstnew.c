#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
int main()
{
	// char str[] = "hello";
	char *str = NULL;
	t_list *head = ft_lstnew(str);
	printf("%s\n", head->content);             
}