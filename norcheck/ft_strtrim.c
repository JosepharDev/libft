#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../norcheck/ft_strdup.c"
//#include "../norcheck/ft_strlen.c"
#include "../norcheck/ft_substr.c"
static int search(char c, const char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(c == str[i])
			return (0);
		i++;
	}
	return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t beg = 0;
	size_t end = 0;
	if(!s1)
		return (NULL);
	if(!set)
		return (ft_strdup(s1));
	end = strlen(s1) - 1; //// w
	while(s1[beg] && search(s1[beg], set) == 0)
		beg++;
	while(s1[end] && search(s1[end], set) == 0)
		end--;
	size_t j = end - beg;
	char *substr = NULL;
	substr = ft_substr(s1, beg,  j + 1);
	return (substr);
}
int main()
{
	printf("%s\n", ft_strtrim("helyoussefyahyahhhel", "hel"));
}