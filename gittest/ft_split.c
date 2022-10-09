#include "libft.h"

static char	**malloc_error(char **tab)
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
			return (malloc_error(arr));
		i++;
	}
	arr[i] = 0;
	return (arr);
}




//////////////////

#include "libft.h"

static int		ft_hm(char const *s, char c)
{
	size_t	nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			nbr++;
		if (s[i])
			i++;
	}
	if (nbr == 0 && s[i - 1] == c)
		return (0);
	if (s[0] != c)
		nbr++;
	return (nbr);
}

static char		**ft_mal(char **strs, char const *s, char c)
{
	size_t	count;
	int		i;
	int		h;

	count = 0;
	i = 0;
	h = 0;
	while (s[h])
	{
		if (s[h] != c)
			count++;
		else if (h > 0 && s[h - 1] != c)
		{
			strs[i] = malloc(sizeof(char) * (count + 1));
			if (!strs[i])
				return (0);
			count = 0;
			i++;
		}
		if (s[h + 1] == '\0' && s[h] != c)
			if (!(strs[i] = malloc(sizeof(char) * count + 1)))
				return (0);
		h++;
	}
	return (strs);
}

static char		**ft_cpy(char **strs, char const *s, char c)
{
	int i;
	int j;
	int h;

	i = 0;
	j = 0;
	h = 0;
	while (s[h])
	{
		if (s[h] != c)
			strs[i][j++] = s[h];
		else if (h > 0 && s[h - 1] != c)
			if (h != 0)
			{
				strs[i][j] = '\0';
				j = 0;
				i++;
			}
		if (s[h + 1] == '\0' && s[h] != c)
			strs[i][j] = '\0';
		h++;
	}
	return (strs);
}

char			**ft_split(char const *s, char c)
{
	char	**rtn;
	int		nbr_w;

	if (!s || !*s)
	{
		if (!(rtn = malloc(sizeof(char *) * 1)))
			return (NULL);
		*rtn = (void *)0;
		return (rtn);
	}
	nbr_w = ft_hm(s, c);
	rtn = malloc(sizeof(char *) * (nbr_w + 1));
	if (!rtn)
		return (0);
	if (ft_mal(rtn, s, c) != 0)
		ft_cpy(rtn, s, c);
	else
	{
		free(rtn);
		return (NULL);
	}
	rtn[nbr_w] = (void *)0;
	return (rtn);
}



