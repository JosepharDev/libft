//#include "../correct/libft.h"
#include <stdio.h>
char    *ft_itoa(int n)
{
    int cnt = 0;
    char *str;
    int temp = n;
if(n < 0)
    n = abs(n);
while(temp != 0)
{
    temp =temp / 10;
    cnt++;
}
str = malloc(cnt * sizeof(char) + 1);
str[cnt] = '\0';
while(cnt != 0)
{
  str[--cnt] = n % 10 + 48;
  n = n / 10;
    
}
return (str);
}
int main ()
{
    char *str = ft_itoa(1234);
    printf("%s\n", str);
}
c