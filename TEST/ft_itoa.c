/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:54:45 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/15 16:01:17 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (n *= -1);
	if (n > 0)
		return (n);
}

static int count(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char *negative(int n)
{
		int cont;
		char *str;

		cont = 1;
		cont += count(n);
		str = malloc (cont * sizeof(char) + 1);
		if(str == NULL)
			return (NULL);
		str[cont] = '\0';
		while (cont > 1)
		{
			str[--cont] = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		str[0] = '-';
		return (str);
}

static char *positive(int n)
{
	char	*str;
	int		cont;

	cont += count(n);
	str = malloc (cont * sizeof(char) + 1);
	if(str == NULL)
		return (NULL);
	str[cont] = '\0';
	while (cont != 0)
	{
		str[--cont] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		cont;
	char	*str;

	cont = 0;
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = '0';
		str[1] = '\0';
		return(str);
	}
	if(n < 0)
	{
		str = negative(n);
		if(str == NULL)
			return (NULL);
		return (str);
	}
	if(n > 0)
	{
		str = negative(n);
		if(str == NULL)
			return (NULL);
		return (str);
	}
}
