/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:10 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/11 13:51:43 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char		*tmp;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		tmp = dest;
		s = src;
		while (count--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dest;
		tmp += count;
		s = src;
		s += count;
		while (count--)
			*--tmp = *--s;
	}
	return ((char *)dest);// should i return char * or void *
}
