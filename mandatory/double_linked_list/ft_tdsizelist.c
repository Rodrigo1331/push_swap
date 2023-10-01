/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tdsizelist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:58:17 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/03/16 16:22:53 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"

int	ft_tdsize(t_dlist *head)
{
	int		i;
	t_dlist	*lst;

	i = 0;
	if (!head)
		return (0);
	lst = head;
	if (lst->prev)
		while (lst->prev)
			lst = lst->prev;
	if (!lst->next)
		return (1);
	while (lst)
	{
		i++;
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	while (lst->prev)
		lst = lst->prev;
	return (i);
}
