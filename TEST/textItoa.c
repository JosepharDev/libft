//#include "../correct/libft.h"
#include <stdio.h>  

int ft_abs(int n)
{
  if (n < 0)
    return (n *= -1);
  if (n > 0)
    return (n);
}

char *ft_itoa(int n)
{
    int cont = 0;
    int tmp;
    char *str;
    if(n == 0)
    {
        str = malloc(2 * sizeof(char));
        str[0] = '0';
        str[1] = '\0';
    }
    if(n < 0)
    {
        cont++;
        tmp = n;
        while(tmp != 0)
        {
            tmp = tmp / 10;
            cont++;
        }
        str = malloc (cont * sizeof(char) + 1);
        str[cont] = '\0';
        while(cont > 1)
        {
            str[--cont] = ft_abs(n % 10) + '0';
            n = n / 10;
        }
        str[0] = '-';
        return (str);
    }
    if (n > 0)
    {
        int tmp = n;
        while(tmp > 0)
        {
            tmp = tmp / 10;
            cont++;
        }
        str = malloc (cont * sizeof(char) + 1);
        str[cont] = '\0';
        while(cont != 0)
        {
            str[--cont] = n % 10 + '0';
            n = n / 10;
        }
        return (str);
    }
}

int main ()
{
    char *str = ft_itoa(-2147483648);
    printf("%s\n", str);

}













#include "libft.h"

int ft_abs(int n)
{
  if (n < 0)
    return (n *= -1);
  if (n > 0)
    return (n);
}

char	*ft_itoa(int n)
{
	int		cnt;
	char	*str;
	int		temp;

	cnt = 1;
	if (n < 0)
		n *= -1;
	temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		cnt++;
	}
	str = malloc(cnt * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str[cnt] = '\0';
	while (cnt != 0)
	{
		str[--cnt] = ft_abs(n % 10) + 48;
		n = n / 10;
	}
	str[0] = '-';
	return (str);
}