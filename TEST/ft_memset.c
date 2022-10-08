#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
    char *temp = (char *)b;
    while(len--)
    {
        *temp++ = c;
    }
    return (temp);
}
  //disable just for use this function in another function main redefinition
  /*
int main()
{
    char str[] = "programming for you langauge";
    memset(str + 12 , '?', 2);
    printf("%s\n", str);

    char str1[] = "programming for you langauge";
    ft_memset(str1 + 12 , '?', 2);
    printf("%s\n", str1);
}

*/
/*

void *my_memset(void *b, int c, size_t len)
{
    char *pb;
    unsigned char car;

    if (b == NULL)
        return (NULL);
    pb = b;
    car = (unsigned char)c;
    while (len--)
    {
        *pb++ = car;
    }
    return (b);
}

void ft_bzero(void *s, size_t  n)
{
     ft_memset(s, 0, n);
}


*/