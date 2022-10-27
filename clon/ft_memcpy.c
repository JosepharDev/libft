/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:09 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/23 10:03:21 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;

	tdst = (char *) dst;
	tsrc = (char *) src;
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*tdst = *tsrc;
		tdst++;
		tsrc++;
		n--;
	}
	return (dst);
}
