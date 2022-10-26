/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:01:00 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/26 15:49:01 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
#include <string.h>
#include <stdio.h>
// int main()
// {
// 	// char str[] = "hello";
// 	// char st[] = "world";//
// 	// printf("%lu\n", ft_strlcat(str, st, 10));
// 	// printf("%s\n", str);
	
// 	// printf("%lu\n", strlcat(str, st, 10));
// 	// printf("%s\n", str);
// }