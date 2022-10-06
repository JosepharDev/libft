#include <stdio.h>
#include <string.h>
/*char *ft_strnstr(char* haystack, char* needle, int n)
{
    int i;
    i = 0;
    int j;
    while(haystack[i] != '\0')
    {
        j = 0;
        while(needle[j + i] == haystack[i])
        {
            j++;
        }
        i++;
    }
}*/
int main()
{
    char *haystack = "hellobroittttma";
    char *needle = "helee";
    int n = 3;
    printf("%s", strnstr(haystack, needle, n));

}