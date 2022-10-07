int ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;
	i = 0;
	sign = 1;
	nbr = 1;
	// nbr should be at value 1 , if you don't think so 
	// test it with value 0 and str = "123a456" use your ft_atoi and atoi
	// result will be ft_atoi = 23 and atoi = 123
	while(str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == ' ' 
			|| str[i] == '\n' || str[i] == '\f')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else 
		i++;
	while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr*= 10;
		nbr = nbr + str[i] - 48;
		i++;
	}
	return (nbr * sign);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("	  123a456"));
	printf("%d", atoi("	  123a456"));
}
