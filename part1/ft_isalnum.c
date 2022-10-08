#include "libft.h"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%d\n", ft_isalnum(97));
    printf("%d\n", isalnum(97));
}