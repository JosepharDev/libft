int ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;
	i = 0;
	sign = 1;
	nbr = 0;
	while(str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == ' ' 
			|| str[i] == '\n' || str[i] == '\f')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr*= 10;
		nbr = nbr + str[i] - 48;
		i++;
	}
	return (nbr * sign);
}