/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:10 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/27 18:54:17 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*tmp;
	char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		tmp = (char *)dest;
		s = (char *)src;
		while (count--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = (char *)dest;
		tmp += count;
		s = (char *)src;
		s += count;
		while (count--)
			*--tmp = *--s;
	}
	return (dest);
}
