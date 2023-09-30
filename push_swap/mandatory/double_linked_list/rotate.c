/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurz-an <rcurz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:33:08 by rcurz-an          #+#    #+#             */
/*   Updated: 2023/09/18 12:33:08 by rcurz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"

t_dlist	*rotate(t_dlist *lst, t_utils *utils)
{
	int		temp;

	if (!lst)
		return (NULL);
	if (ft_tdsize(lst) < 2)
		return (lst);
	temp = lst->data;
	while (lst)
	{
		if (lst->next)
			lst->data = lst->next->data;
		else
		{
			lst->data = temp;
			break ;
		}
		lst = lst->next;
	}
	if (utils->rotate_total == 'a')
		ft_printf("ra\n");
	else if (utils->rotate_total == 'b')
		ft_printf("rb\n");
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}

t_dlist	*r_rotate(t_dlist *lst, t_utils *utils)
{
	int		temp;

	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	temp = lst->data;
	while (lst)
	{
		if (lst->prev)
			lst->data = lst->prev->data;
		else
		{
			lst->data = temp;
			break ;
		}
		lst = lst->prev;
	}
	if (utils->rotate_total == 'a')
		ft_printf("rra\n");
	else if (utils->rotate_total == 'b')
		ft_printf("rrb\n");
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}