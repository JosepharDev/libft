#include <string.h>
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    char *temp = (char*)s;
    while(*temp != '\0' && n)
    {
        if(*temp == c)
            return (temp);
        temp++;
        n--;
    }
    return (NULL);
}

int main()
{
    char s[] = {'i','n','t','e','r','p','r','e','t','e','r'};
    char *pos = ft_memchr(s, 'e', 10);
    if(pos == NULL)
      printf("NULL\n");
    else
      printf("%c\n", pos[0]);
      printf("%c\n", pos[1]);

    char s1[] = {'i','n','t','e','r','p','r','e','t','e','r'};
    char *pos1 = memchr(s1, 'e', 10);
    if(pos1 == NULL)
      printf("NULL\n");
    else
      printf("%c\n", pos1[0]);
      printf("%c\n", pos1[1]);

}