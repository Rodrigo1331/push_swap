/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:50:39 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/03/24 10:39:12 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/incs/ft_printf.h"
# include "../libft/incs/get_next_line.h"
# include "../libft/incs/get_next_line_bonus.h"
# include "push_swap.h"

/*starting list bonus*/
void	error_func_bonus(t_dlist **list, int a, char *argv[], int i);
int		checking_digits_bonus(char **argv, int argc);
t_dlist	*first_list_bonus(char **argv, int argc);
int		checking_list_bonus(t_dlist *lst, char *argv[]);
void	checker_final(t_dlist **s_a, t_dlist **s_b, t_utils *u, char *args);

/*movements bonus*/
void	rotates(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	r_rotates(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	swap_check(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	push_check(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
t_utils	*start_utils(t_utils *utils, t_dlist *stacka);

#endif