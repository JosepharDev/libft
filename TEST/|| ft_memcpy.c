#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *tdst = (char *)dst;
    char *tsrc = (char *)src;
    while(n)
    {
        *tdst = *tsrc;
        tdst++;
        tsrc++;
        n--;
    }
    *tdst = '\0';
    return (dst);
}

int main()
{
    char dest[] = "abcdefghkdlls";
    char src[] = "lll";
    printf("%s\n", memcpy(dest + 11, src, 3));

    char dest1[] = "abcdefghkdlls";
    char src1[] = "lll";
    printf("%s\n", ft_memcpy(dest1 + 11, src1, 3));
}