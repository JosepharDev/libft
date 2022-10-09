int		ft_toupper(int c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

////////



int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}


////////

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

