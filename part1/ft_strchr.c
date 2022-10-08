			// code may is correct

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{	
	char *temp = (char*) s;
	//int i = 0;
	while(*temp != '\0')
	{
		if(*temp == c)
			return(temp);
		temp++;
		//i++;
	}
	if(*temp == c)
		return (temp);
	return(NULL);
}/*

int main()
{
	char *str;
	char *st;
	//char *string = NULL;
	char *string = "";
	str = ft_strchr(string, 97);
	st = strchr(string, 97);
	printf("%s\n%s\n", str, st);
}
*/









/* from old file 

#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    char* temp = NULL;
     temp = (char*)s;
    while(*temp != '\0')
    {   
        if(*temp == c)
            return (temp);
        temp++;
    }
    if(*temp == c)
       return (temp);
      // double check
    return (NULL);
}


int main()
{
    printf("%s\n", ft_strchr("hello", 0));
    printf("%s\n", strchr("hello", 0));
}

*/