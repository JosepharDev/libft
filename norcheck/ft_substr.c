#include <stdlib.h>
#include <stdio.h>
/////    more cases to check
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *ptr = NULL;
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
    return (ptr);
}

// int main()
// {
//     const char s[] = "helljjdljmnsdo";
//     printf("%s\n", ft_substr(s, 2, 5));
// }