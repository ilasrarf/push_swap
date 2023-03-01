/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:22 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/20 19:33:50 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_max_min_handl(long i)
{
	if (i > 2147483647 || i < -2147483648)
		ft_error_writer("!!ERROR!!");
}

int	ft_atoi(char *str)
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
			ft_error_writer("!!ERROR!!");
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
	ft_max_min_handl(res * signe);
	return (res * signe);
}
