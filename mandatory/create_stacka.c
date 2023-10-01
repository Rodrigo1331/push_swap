/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacka.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:05:34 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/03/16 17:23:28 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

t_dlist	*aux_stacka(t_dlist *stacka, int i, int j)
{
	int	number;

	number = 0;
	while (number++ < i)
		stacka = stacka->next;
	stacka->data = ft_tdsize(stacka) - j++;
	while (stacka->prev)
		stacka = stacka->prev;
	return (stacka);
}

t_dlist	*finish_stack(t_dlist *lst, t_dlist *stacka, int min)
{
	int	max;
	int	i;
	int	j;

	max = get_max(lst);
	i = 0;
	j = 0;
	while (lst)
	{
		if (max == lst->data && max != min)
		{
			max = get_max2(lst, max);
			stacka = aux_stacka(stacka, i, j);
			while (lst->prev)
				lst = lst->prev;
			i = -1;
			j++;
		}
		else if (!lst->next)
			break ;
		else
			lst = lst->next;
		i++;
	}
	return (stacka);
}

t_dlist	*create_stack(t_dlist *lst)
{
	t_dlist	*stacka;
	int		min;
	int		i;

	stacka = NULL;
	i = checking_list(lst);
	if (i == 1)
		return (NULL);
	min = get_min(lst);
	i = 1;
	stacka = ft_createnode(1);
	while (i < ft_tdsize(lst))
	{
		stacka->next = ft_createnode(1);
		stacka->next->prev = stacka;
		stacka = stacka->next;
		i++;
	}
	while (stacka->prev)
		stacka = stacka->prev;
	stacka = finish_stack(lst, stacka, min);
	return (stacka);
}
