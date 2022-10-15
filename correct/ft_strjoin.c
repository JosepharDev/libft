/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:00:35 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/14 18:03:01 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			ls ;
	int			ls1;
	char		*str;

	ls = ft_strlen(s2);
	ls1 = ft_strlen(s1);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, ls + 1);
	ft_strlcat(str, s2, ls1 + ls + 1);
	return (str);
}
