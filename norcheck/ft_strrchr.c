char *ft_strrchr(const char *s, int c)
{
  char *fnd, *ptr;
  
  if (c == '\0')
    return ft_strchr (s, '\0');

  fnd = NULL;

  while ((ptr = ft_strchr (s, c)) != NULL)
    {
      fnd = ptr;
      s = ptr + 1;
    }
  return fnd;
}
