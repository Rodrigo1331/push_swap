/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:50:39 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/11/02 14:32:38 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "push_swap.h"

/*starting list bonus*/
void	error_func_bonus(t_dlist **list);
int		checking_digits_bonus(char **argv);
t_dlist	*first_list_bonus(char **argv, int argc);
int		checking_list_bonus(t_dlist *lst);
void	checker_final(t_dlist **s_a, t_dlist **s_b, t_utils *u);

/*movements bonus*/
void	rotates(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	r_rotates(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	swap_check(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
void	push_check(t_dlist **s_a, t_dlist **s_b, char *str, t_utils *utils);
t_utils	*start_utils(t_utils *utils, t_dlist *stacka);

#endif