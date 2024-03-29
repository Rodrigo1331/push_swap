/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:04:33 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/03/21 10:44:27 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/push_swap.h"

void	print_dblist(t_dlist *lst)
{
	if (lst)
	{
		ft_printf("\nLIST: \n");
		while (lst)
		{
			ft_printf("  %d\n", lst->data);
			if (lst->next == NULL)
				break ;
			lst = lst->next;
		}
		while (lst->prev)
			lst = lst->prev;
	}
	else
		ft_printf("NO LIST\n");
}

void	finish_print(t_dlist *lst1, t_dlist *lst2)
{
	if (lst1)
	{
		while (lst1)
		{
			ft_printf("%d \t\n", lst1->data);
			if (!lst1->next)
				break ;
			lst1 = lst1->next;
		}
	}
	if (lst2)
	{
		while (lst2)
		{
			ft_printf("  \t %d\n", lst2->data);
			if (!lst2->next)
				break ;
			lst2 = lst2->next;
		}
	}
}

void	print_dblist2(t_dlist *lst1, t_dlist *lst2)
{
	if (lst1 || lst2)
	{
		ft_printf("\nA \t B\n");
		while (lst1 && lst2)
		{
			ft_printf("%d \t %d\n", lst1->data, lst2->data);
			lst2 = lst2->next;
			lst1 = lst1->next;
		}
		finish_print(lst1, lst2);
	}
}
