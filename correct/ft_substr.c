/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:24:58 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/11 14:25:00 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (start > ft_strlen(s))
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] && len)
	{
		ptr[i] = s[start];
		i++;
		start++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
