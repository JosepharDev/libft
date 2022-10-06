int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c-= 32;
return (c);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%d\n", ft_toupper(67));
    printf("%d\n", toupper(67));
}