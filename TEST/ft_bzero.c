#include <stdio.h>
#include <strings.h>
#include "ft_memset.c" // use libft.h
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

/* for another use
int main()
{
    char s1[20] = "hello";
    bzero(s1, 10);
    printf("%s\n", s1);

    char s2[20] = "hello";
    ft_bzero(s2, 10);
    printf("%s\n", s2);
}
*/