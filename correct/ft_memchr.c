/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:35:26 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/10 20:37:24 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (n--) // or should be while(s != NULL && n--) should handel NULL or not
	{
		if (*temp == (unsigned char )c)
			return (temp);
		temp++;
	}
	return (NULL);
}
