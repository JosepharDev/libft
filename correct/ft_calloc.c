/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:33:52 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/10 20:35:01 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) // problem if count * size overflow range size_t 
{
	void	*p;
	if (size && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, count * size);
	return (p);
}
