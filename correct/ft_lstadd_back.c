/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:24:05 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/20 12:24:08 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsadd_back(t_list **lst, t_list *new)
{
	t_list	*head;


	head = *lst;
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = new;
}
