#include <stdio.h>
#include <string.h>
#include "../norcheck/ft_strlen.c"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));

}
int main()
{
	char dst[20] = "hel";
	//char dst1[20] = "hel";

	char src[10] = "youssef";
	//char src1[10] = "youssef";
	printf("%ld\n", ft_strlcat(dst, src, 30));
	//printf("%ld\n", strlcat(dst1, src1, 30));

	printf("%s\n%s\n", dst, dst);
}