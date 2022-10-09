char *ft_strdup(const char *s1)
{
  int i = 0;
    char *copy = NULL;
    int len = ft_strlen(s1);   
    copy = (char *)malloc(len * sizeof(char) + 1);
    if(copy == NULL)
        return (NULL);
    while(*s1)
    {
        copy[i] = *s1;
        i++;
        s1++;
    }
    copy[i] = '\0';
    return (copy);
    
}