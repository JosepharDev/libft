#include <string.h>
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *temp1 = (char *)s1;
    char *temp2 = (char *)s2;
    while(*temp1 == *temp2 && n--)
    {
        temp1++;
        temp2++;
    }
    return (*temp1 - *temp2);
}
int main()
{
    const char s1[] = "aello"; 
    const char s2[] = "htoms"; 
    printf("%d\n", ft_memcmp(s1, s2, 1));

    const char s3[] = "aello"; 
    const char s4[] = "htoms"; 
    printf("%d\n", memcmp(s3, s4, 1));
}