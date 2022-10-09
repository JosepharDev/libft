size_t ft_strlen(const char *str)
{
	size_t i;
	// if(*str == NULL)
	// 	return (0);
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
//if string is empty should return 0
// if string is point to NULL should segfult error 
