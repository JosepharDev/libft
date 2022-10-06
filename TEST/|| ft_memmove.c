#include <string.h>
#include <stdio.h>
//void *ft_memmove(void *dst, const void *src, size_t len)
//{

//}

int main()
{
    char dst[] = "qwertyuiopasdfg";
    char src[] = "zxcvbnm";
    printf("%s\n", memmove(dst + 11, src, 7));
}