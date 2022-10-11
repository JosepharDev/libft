/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:08:21 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/11 14:09:31 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	needlen = ft_strlen(needle);
	while (haystack[i] != '\0' && i <= len)
	{
		if (haystack[i] == *needle && len - 1 >= needlen
			&& ft_strncmp(&haystack[i], needle, needlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
