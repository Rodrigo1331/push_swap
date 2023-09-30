/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_lst_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:53:45 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/09/19 10:53:45 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"

t_dlist	*add_to_front(int data, t_dlist *lsti)
{
	if (!lsti)
		lsti = ft_createnode(data);
	else
	{
		lsti->prev = ft_createnode(data);
		lsti->prev->next = lsti;
		lsti = lsti->prev;
	}
	while (lsti->prev)
		lsti = lsti->prev;
	return (lsti);
}
