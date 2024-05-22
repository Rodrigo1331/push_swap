/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting_list_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:06:04 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/11/03 11:53:41 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap_bonus.h"

void	error_func_bonus(t_dlist **list)
{
	write(2, "Error\n", 6);
	if (list)
		free_list(list);
	exit(EXIT_FAILURE);
}

int	checking_digits_bonus(char **argv)
{
	int	i;
/* 	int	j; */

	i = 1;
/* 	j = 0; */
	while (argv[i])
	{
/* 		j = 0; */
		if (*argv[i] == '\0')
			error_func_bonus(NULL);
		i++;
	}
	return (0);
}

t_dlist	*first_list_bonus(char **argv, int argc)
{
	t_dlist		*lst;
	long int	number;
	int			i;

	i = 1;
	number = ft_atol(argv[1]);
	if (number > 2147483647 || number < -2147483648)
		error_func_bonus(NULL);
	lst = ft_createnode(number);
	while (++i < argc)
	{
		number = ft_atol(argv[i]);
		if (number > 2147483647 || number < -2147483648)
			error_func_bonus(&lst);
		lst->next = ft_createnode(number);
		lst->next->prev = lst;
		lst = lst->next;
	}
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}

int	checking_list_bonus(t_dlist *lst)
{
	t_dlist	*new;
	int		i;

	new = lst;
	i = 1;
	while (lst)
	{
		new = lst->next;
		while (new)
		{
			if (new->data == lst->data)
				error_func_bonus(&lst);
			new = new->next;
		}
		i++;
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	while (lst->prev)
		lst = lst->prev;
	return (0);
}

void	checker_final(t_dlist **s_a, t_dlist **s_b, t_utils *u)
{
	if (checking_ifordered(*s_a, 1) != 1 || ft_tdsize(*s_b) > 0 \
	|| ft_tdsize(*s_a) != u->size)
	{
		ft_printf("KO\n");
	}
	else
	{
		ft_printf("OK\n");
		ft_printf("The sorting took: %d movements\n", u->movements_t);
	}
	if (*s_a != NULL)
		free_list(s_a);
	if (*s_b != NULL)
		free_list(s_b);
}
