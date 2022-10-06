#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    char* temp = NULL;
     temp = (char*)s;
    while(*temp != '\0')
    {   
        if(*temp == c)
            return (temp);
        temp++;
    }
    if(*temp == c)
       return (temp);
      // double check
    return (NULL);
}


int main()
{
    printf("%s\n", ft_strchr("hello", 0));
    printf("%s\n", strchr("hello", 0));
}