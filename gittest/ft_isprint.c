int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}


////////


int		ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) ? c : 0);
}


////////

int		ft_isprint(int c)
{
	if (c < (int)' ' || c > (int)'~')
		return (0);
	return (1);
}