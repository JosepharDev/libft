#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *ptr = (char *)s;
    ptr = malloc(len * sizeof(char) + 1);
    if(ptr == NULL)
        return (NULL);
    while(len)
    {
        ptr[i] = s[start];
        i++;
        start++;
        len--;
    }
    ptr[i] = '\0';
    free(ptr);
    return (ptr);
}

int main()
{
    printf("%s\n", ft_substr("helljjdljmnsdo", 2, 5));
}