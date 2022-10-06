#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char *temp = (char*)s;
	int i = 0;
	int flag = 0;
	while(temp[i] != '\0')
	{
		if(temp[i] == c)
			flag = i;
		i++;
	}
		if(flag == 0)
			return (NULL);
	return (temp + flag);
	
	
	/*
	while(*temp)
	{
		if(*temp == c && flag == 1 )
			return (temp);
		temp++;
		flag -= 1;
	}
	*/
}

int main()
{
	char *str = ft_strrchr("hello", 97);
	char *st = strrchr("hello", 97);
	printf("me = %s\n lib = %s\n", str, st);
}
