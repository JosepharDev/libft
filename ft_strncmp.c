int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i] && n)
	{
		n--;
		i++;
	}
	if(n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_strncmp("hello", "hellw", 6));
	printf("%d", strncmp("hello", "hellw", 6));
}
