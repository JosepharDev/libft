int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}


////////


int		ft_tolower(int c)
{
	return ((c >= 65 && c <= 90) ? c + 32 : c);
}




/////////


int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}