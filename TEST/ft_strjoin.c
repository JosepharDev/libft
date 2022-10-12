#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str = malloc(strlen(s1) + strlen(s2) + 1);  // use FT_STRLEN
    if(str == NULL)
        return (NULL);
        int ls = strlen(s2);
        int ls1 = strlen(s1);
    strlcpy(str, s1, ls + 1);  // use strlcpy
    strlcat(str, s2, ls1 + ls + 1);  // use strlcat
    return (str);

}
int main()
{
    char str[] = "hello";
    char str1[] = "world";

    printf("%s\n", ft_strjoin(str,str1));
}