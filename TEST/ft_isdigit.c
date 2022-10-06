int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return (1);
    return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d\n", ft_isdigit(50));    
    printf("%d\n", isdigit(50));    
}
*/