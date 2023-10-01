/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:47:37 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/03/19 13:37:06 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	get_values2(int a, int data, t_dlist **stackb, t_utils *utils)
{
	while (*stackb)
	{
		if ((*stackb)->data < data && (*stackb)->data > a && utils->part == 'f')
			a = (*stackb)->data;
		else if ((*stackb)->data > data && \
		(*stackb)->data < a && utils->part == 's')
			a = (*stackb)->data;
		if (!(*stackb)->next)
			break ;
		(*stackb) = (*stackb)->next;
	}
	while ((*stackb)->prev)
		(*stackb) = (*stackb)->prev;
	return (a);
}

int	get_values(int data, t_dlist **stackb, t_utils *utils)
{
	int	a;

	if (utils->part == 'f')
		a = 0;
	else
		a = 700;
	if ((data > get_max(*stackb) || data < get_min(*stackb)))
	{
		if (utils->part == 'f')
			a = get_max(*stackb);
		else if (utils->part == 's')
			a = get_min(*stackb);
		return (a);
	}
	a = get_values2(a, data, stackb, utils);
	return (a);
}
