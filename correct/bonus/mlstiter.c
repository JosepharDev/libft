#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
void f(void *content)
{
	char *str = (char *)content;
	int i; 
	i = 0;
	while(str[i] != '\0')
		str[i++] -=32;  
}
int main()
{
	 t_list *head = malloc(sizeof(t_list));
	 char str[] = "hello";
	 //head->content = malloc(sizeof(str));
	 head->content = str;
	 head->next = NULL;
	 ft_lstiter(head, &f);
	 printf("%s\n", head->content);
}