char *ft_strchr(const char *s, int c)
{	
	char *temp = (char*) s;
	while(*temp != '\0')
	{
		if(*temp == c)
			return(temp);
		temp++;
	}
	if(*temp == c)
		return (temp);
	return(NULL);
}