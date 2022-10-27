/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:07:57 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/26 15:02:51 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ps;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ps = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ps == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ps[i] = (*f)(i, s[i]);
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
