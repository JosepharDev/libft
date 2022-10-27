/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:24:05 by yoyahya           #+#    #+#             */
/*   Updated: 2022/10/25 12:35:03 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!lst || !new)
		return ;
	head = *lst;
	if (*lst)
	{
		head = ft_lstlast(*lst);
		head->next = new;
	}
	else
		*lst = new;
}
