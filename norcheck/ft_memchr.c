void *ft_memchr(const void *s, int c, size_t n)
{
    char *temp = (char*)s;
    while(n--)
    {
        if(*temp == c)
            return (temp);
        temp++;
    }
    return (NULL);
}