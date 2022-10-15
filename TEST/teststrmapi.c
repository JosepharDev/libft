#include "../correct/libft.h"

char f(unsigned int i, char c)
{
	printf("%d\n %c\n", i, c);
	return (c - 32);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ps;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ps = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ps == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ps[i] = (*f)(i, s[i]);
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
int main()
{
	char str[] = "hello";
	char *st = ft_strmapi(str ,&f);
	printf("%s\n", st);
	
}