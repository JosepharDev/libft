/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:25:18 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/19 21:25:20 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

static char	*mword( const char *s, char c, int *i)
{
	int		len;
	int		j;
	char	*temp;

	while (s[*i] == c)
		(*i)++;
	len = 0;
	j = *i;
	while (s[j] && s[j] != c)
	{
		len++;
		j++;
	}
	temp = malloc((len + 1) * sizeof(char));
	j = 0;
	if (temp == NULL)
		return (NULL);
	while (s[(*i)] != '\0' && s[(*i)] != c)
	{
		temp[j] = s[(*i)];
		j++;
		(*i)++;
	}
	temp[j] = '\0';
	return (temp);
}

static char	**merror(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		k;
	int		cont;
	int		i;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	cont = count(s, c);
	arr = malloc((cont + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (i < cont)
	{
		arr[i] = mword(s, c, &k);
		if (!arr[i])
			return (merror(arr));
		i++;
	}
	arr[i] = 0;
	return (arr);
}
