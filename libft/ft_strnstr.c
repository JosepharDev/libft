/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:08:21 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/23 13:30:09 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0' && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			j++;
			i++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i - j);
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (NULL);
}
