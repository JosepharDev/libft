#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
    char *temp = NULL;
    while(*s)
    {
        if(*s == c)
            *temp = *s;
        s++;
    }
    return (temp);
}