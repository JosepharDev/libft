/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:24:58 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/23 15:36:10 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup("\0"));
	}
	if (len > ft_strlen(s))
		ptr = malloc(ft_strlen(s) * sizeof(char) + 1);
	else
		ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[start] && len)
	{
		ptr[i++] = s[start];
		start++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
