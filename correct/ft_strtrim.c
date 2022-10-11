/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:12:54 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/11 14:19:34 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	search(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	size_t	j;
	char	*substr;

	beg = 0;
	end = 0;
	substr = NULL;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = strlen(s1) - 1;
	while (s1[beg] && search(s1[beg], set) == 0)
		beg++;
	while (s1[end] && search(s1[end], set) == 0)
		end--;
	j = end - beg;
	substr = ft_substr(s1, beg, j + 1);
	return (substr);
}
