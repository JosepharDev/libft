int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *temp1 = (char *)s1;
    char *temp2 = (char *)s2;
	if(n == 0)
		return (0);
    while(*temp1 == *temp2 && n--)
    {
        temp1++;
        temp2++;
    }
    return (*temp1 - *temp2);
}