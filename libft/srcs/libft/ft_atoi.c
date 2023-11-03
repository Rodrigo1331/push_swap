/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/11/02 12:41:06 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_signal(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	return_s(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	signal = 1;
	number = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (is_signal(nptr[i]) == 1)
	{
		signal = return_s(nptr[i]) * signal;
		i++;
	}
	while (nptr[i] != '\0' && is_number(nptr[i]) == 1)
	{
		number = 10 * number + (nptr[i] - '0');
		i++;
	}
	return (number * signal);
}
