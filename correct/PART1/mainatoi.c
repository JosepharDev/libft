#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", ft_atoi(" 	-aaab"));
	printf("%d\n", atoi(" 	-aaab"));
	printf("\n");
	printf("%d\n", ft_atoi(" 	-1234567aaab"));
	printf("%d\n", atoi(" 	-1234567aaab"));
	printf("\n");
	// printf("%d\n", ft_atoi(NULL)); // segfult
	// printf("%d\n", atoi(NULL)); // segfult
	printf("\n");
	printf("%d\n", ft_atoi("123456789012345678"));
	printf("%d\n", atoi("123456789012345678"));
	printf("\n");
	printf("%d\n", ft_atoi("12345678901234567890"));
	printf("%d\n", atoi("12345678901234567890"));
	printf("\n");
	printf("%d\n", ft_atoi("922337203685477580874594532066"));
	 printf("%d\n", atoi("922337203685477580543128845129066"));

}