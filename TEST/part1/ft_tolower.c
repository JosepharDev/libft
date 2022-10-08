int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
        c+= 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%d\n", ft_tolower(70));
    printf("%d\n", tolower(70));
}