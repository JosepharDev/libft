int ft_isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isalpha(-97));
	printf("%d", isalpha(-97));
}
*/