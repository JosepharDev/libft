void *ft_memset(void *b, int c, size_t len)
{
    char *temp = (char *)b;
    while(len--)
    {
        *temp++ = c;
    }
    return (temp); // like return ((void *) temp);
}