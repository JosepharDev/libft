/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:43:50 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/25 19:08:55 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


// use betwise OR in open function 
// she means that will evalute one if first option is true than open function will work 
// open("file.txt" , O_CREAT | RDONLY)
// like if file exist(means falls) will go to second option to evalute if set permetion (means true) than open will sucsess