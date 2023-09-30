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

t_dlist	*delete_from_front(t_dlist *lsta)
{
	t_dlist	*temp;

	temp = lsta;
	if (!lsta->next)
		lsta = NULL;
	else
	{
		lsta = lsta->next;
		lsta->prev = NULL;
	}
	temp->next = NULL;
	free(temp);
	if (!lsta)
		return (NULL);
	while (lsta->prev)
		lsta = lsta->prev;
	return (lsta);
}
