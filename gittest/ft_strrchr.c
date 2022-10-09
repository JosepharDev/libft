#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *r;

	r = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			r = (char*)s;
		s++;
	}
	if (r != NULL)
		return (r);
	else if (c == '\0')
		return ((char*)s);
	else
		return (NULL);
}

//////////

#include  "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	if (!(char)c)
		return ((char *) &s[i]);
	return (0);
}



/////////////////

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		ptr = (char *)(s + i);
	return (ptr);
}
