/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:52:58 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/09/18 11:52:58 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"

t_dlist	*swap(t_dlist *test, t_utils *utils)
{
	int		temp;

	if (!test)
		return (NULL);
	if (ft_tdsize(test) < 2)
		return (test);
	temp = test->data;
	test->data = test->next->data;
	test->next->data = temp;
	while (test->prev)
		test = test->prev;
	if (utils->rotate_total != 'c')
		ft_printf("sa\n");
	return (test);
}

t_dlist	*swap_b(t_dlist *test, t_utils *utils)
{
	int		temp;

	if (!test)
		return (NULL);
	if (ft_tdsize(test) < 2)
		return (test);
	temp = test->data;
	test->data = test->next->data;
	test->next->data = temp;
	if (utils->rotate_total != 'c')
		ft_printf("sb\n");
	while (test->prev)
		test = test->prev;
	return (test);
}