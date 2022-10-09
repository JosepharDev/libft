#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (haystack[i] == *needle && len - i >= nlen
			&& ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}



/////////////


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
				&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}




//////////////////



#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		found;

	if (needle[0] == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		j = i;
		found = j;
		while (needle[k] != '\0')
		{
			if (haystack[j] != needle[k] || j >= len)
				found = -1;
			k++;
			j++;
		}
		if (found != -1)
			return ((char*)haystack + found);
		i++;
	}
	return (NULL);
}
