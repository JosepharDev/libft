#include <stdio.h>
#include <string.h>
#include "../norcheck/ft_strncmp.c"
#include "../norcheck/ft_strlen.c"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t needlen;
    if(*needle == 0)
        return ((char *) haystack);
    i = 0;
    needlen = ft_strlen(needle);
    while(haystack[i] != '\0' && i <= len)
    {
        if(haystack[i] == *needle && len - 1 >= needlen && ft_strncmp(&haystack[i], needle, needlen) == 0)
            return ((char *) &haystack[i]);
        i++;  
    }
    return (NULL);
}

