/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:20:03 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/20 00:20:05 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count(char *str, char c)
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












static char	**merror(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static int	word_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
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

static char	*ft_getword(const char *s1, int *index, char c)
{
	char	*copy;
	size_t	word_len;
	int		i;

	word_len = 0;
	while (s1[*index] == c)
		(*index)++;
	i = *index;
	while (s1[i] && s1[i] != c)
	{
		word_len++;
		i++;
	}
	copy = malloc(sizeof(char) * (word_len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[*index] && s1[*index] != c)
		copy[i++] = s1[(*index)++];
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		index;
	int		wc;
	int		i;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	wc = word_count(s, c);
	arr = malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	while (i < wc)
	{
		arr[i] = ft_getword(s, &index, c);
		if (!arr[i])
			return (merror(arr));
		i++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdio.h>
int main()
{
  char *arr = "";
  char di = 's';
  int i = 0;
  char **str =  ft_split(arr, di);
    while(str[i] != NULL)
    printf("%s\n", str[i++]);
	//printf("%lu\n", sizeof(arr));
}