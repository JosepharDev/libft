int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return (1);
    return (0);
}

#include <stdio.h>
#include <ctype.h>
int main(){
    printf("%d\n", ft_isprint(97));
    printf("%d\n", isprint(97));
}