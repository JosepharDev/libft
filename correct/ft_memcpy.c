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
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*tdst = *tsrc;
		tdst++;
		tsrc++;
		n--;
	}
	return ((void *)dst);// may be when i cast it above it means cast work just there may be dont try to cast it again here
}
// waht about this => This function returns the number of bytes copied to the destination. If the destination memory was too small, it returns -1.
