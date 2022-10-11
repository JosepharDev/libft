#include <stdio.h>
#include <stdlib.h>
typedef struct	s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *newnode = malloc(sizeof(t_list));
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
