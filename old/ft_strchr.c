#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{	
	char *temp = (char*) s;
	int i = 0;
	while(*temp != '\0')
	{
		if(*temp == c)
			return(temp);
		temp++;
		//i++;
	}
	return(NULL);
}

int main()
{
	char *str;
	char *st;
	str = ft_strchr("he@ll@o", 64);
	st = strchr("he@ll@o", 64);
	printf("me = %s\n lib  = %s\n", str, st);
}
