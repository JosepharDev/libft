/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:09 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/10 20:42:02 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;

	tdst = (char *) dst;
	tsrc = (char *) src;
	while (n)
	{
		*tdst = *tsrc;
		tdst++;
		tsrc++;
		n--;
	}
	return ((void *)dst);
}
