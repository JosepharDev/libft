	/// problem is the code segful when don't find match
	/// should return NULL

#include <string.h>
#include <stdio.h>
#include "../ft_strchr.c"
char *ft_strrchr(const char *s, int c)
{
  /*her*/char *found, *p; // i remove "const" from this line but the code work 

  //c = (unsigned char) c; work without cast
  if (c == '\0')
    return ft_strchr (s, '\0');
  found = NULL;
  while ((p = ft_strchr (s, c)) != NULL)
    {
      found = p;
      s = p + 1;
    }
  return found; // i remove cast (char *) from found
}
int main()
{
	printf("%s\n",ft_strrchr("helleo", 32));
	printf("%s\n",strrchr("helleo", 32));
}
