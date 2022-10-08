		// may be is correct should double check

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../../libft/part1/ft_strlen.c"

char *ft_strdup(const char *s1)
{
  int i = 0;
    char *copy = NULL;
    int len = ft_strlen(s1);   
    copy = malloc(len * sizeof(char) + 1);
    if(copy == NULL)
        return (NULL);
    while(*s1)
    {
        copy[i] = *s1;
        i++;
        s1++;
    }
    copy[i] = '\0';
    return (copy);
    
}
int main()
{
    char de[] = "zxcvbnm";
    printf("%s\n", ft_strdup(de));
    char de1[] = "zxcvbnm";
    printf("%s\n", strdup(de1));
}