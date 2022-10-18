#include "../correct/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (start > ft_strlen(s))
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr = malloc((ft_strlen(s) - start) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] && len--)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
#include <stdio.h>
#include <string.h>

int main() {
  char *s2 = ft_substr("lorem ipsum dolor sit amet", 4, -1);
  printf("%s", s2);
}