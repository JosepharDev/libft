#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int main()
{
	char str[] = "hello world";
	ft_bzero(str+3, sizeof(str));
	printf("%s\n", str);
	/////
	char str1[11] = "hello world";
	bzero(str1+3, sizeof(str1));
	printf("%s\n", str1);
	///////
	
}