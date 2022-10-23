/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:18:19 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/23 14:34:32 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\v' || c == '\r' || c == ' '
		|| c == '\n' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	nbr;
	int					sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr = (nbr * 10) + str[i++] - 48;
		if (nbr >= LLONG_MAX && sign == 1)
			return (-1);
		else if (nbr >= LLONG_MAX && sign == -1)
			return (0);
	}
	return ((int)(nbr * sign));
}
