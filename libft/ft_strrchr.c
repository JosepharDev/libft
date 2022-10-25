/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:09:53 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/11 14:12:37 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*fnd;
	char	*ptr;

	if ((char)c == '\0')
		return (ft_strchr (s, '\0'));
	fnd = NULL;
	while ((ft_strchr (s, c)) != NULL)
	{
		ptr = ft_strchr(s, c);
		fnd = ptr;
		s = ptr + 1;
	}
	return (fnd);
}
