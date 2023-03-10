/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:22 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 17:57:47 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_max_min_handl(long i, t_stack **s_a)
{
	if (i > 2147483647 || i < -2147483648)
	{
		ft_lstclear(s_a);
		ft_error_writer("Error\n");
	}
}

int	ft_atoi(char *str, t_stack **s_a)
{
	long	i;
	long	res;
	long	signe;

	signe = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			ft_error_writer("Error\n");
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	ft_max_min_handl(res * signe, s_a);
	return (res * signe);
}
