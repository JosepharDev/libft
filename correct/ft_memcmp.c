/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:27:00 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/10 20:31:58 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*temp1;
	char	*temp2;

	temp1 = (char *) s1;
	temp2 = (char *) s2;
	if (n == 0)
		return (0);
	while (*temp1 == *temp2 && n--)
	{
		temp1++;
		temp2++;
	}
	return (*temp1 - *temp2);
}
