void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *tdst = (char *)dst;
    char *tsrc = (char *)src;
    while(n)
    {
        *tdst = *tsrc;
        tdst++;
        tsrc++;
        n--;
    }
    return ((void*)dst);
}