//#include <string.h>
#include <stdio.h>
//void *ft_memmove(void *dst, const void *src, size_t len)
//{

//}


// some random code

char *ft_memmove(void *dest, const void *src, size_t count)
{
	char *tmp;
	const char *s;
	if (dest <= src) {
		tmp = dest;
		s = src;
		while (count--)
			*tmp++ = *s++;
	} else {
		tmp = dest;
		tmp += count;
		s = src;
		s += count;
		while (count--)
			*--tmp = *--s;
	}
	return (char *)dest;
}

int main()
{
    char dst[16] = "qwertyuiopasdfg";
    char src[] = "zxcvbnm";
    printf("%s\n", ft_memmove(dst + 11, src, 12));
}