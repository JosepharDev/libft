#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str = malloc(strlen(s1) + strlen(s2) + 1);  // use FT_STRLEN
    if(str == NULL)
        return (NULL);
    strcpy(str, s1);  // use strlcpy
    strcat(str, s2);  // use strlcat
    return (str);

}
int main()
{
    char str[] = "hello";
    char str1[] = "world";

    printf("%s\n", ft_strjoin(str,str1));
}