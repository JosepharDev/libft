#include <stdio.h>
#include <strings.h>
#include "ft_memset.c"
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main()
{
    char s1[20] = "hello";
    bzero(s1, 10);
    printf("%s\n", s1);

    char s2[20] = "hello";
    ft_bzero(s2, 10);
    printf("%s\n", s2);
}