int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i] && n > 0)
	{
		n--;
		i++;
	}
	if(n == 0)
		return (0);
	return (s1[i] - s2[i]); // or return ((unsigned char)s1[i] - (unsigned char)s2[i])
}