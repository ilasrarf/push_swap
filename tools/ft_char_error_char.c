/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_error_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:31:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 17:58:39 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error_writer(char *str)
{
	write(2, str, ft_strlen(str));
	exit(1);
}

void	ft_empty_arg(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t') || str[i] == '\0')
	{
		if (str[i] == '\0')
			ft_error_writer("Error\n");
		i++;
	}
}

void	ft_error_char(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		ft_empty_arg(args[i]);
		j = 0;
		while (args[i][j])
		{
			if ((args[i][j] < '0' || args[i][j] > '9') && args[i][j] != ' ')
			{
				if (args[i][j] != '+' && args[i][j] != '-')
					ft_error_writer("Error\n");
			}
			else if ((args[i][j] >= '0' && args[i][j] <= '9'))
			{
				if (args[i][j + 1] == '+' || args[i][j + 1] == '-')
					ft_error_writer("Error\n");
			}
			j++;
		}
		i++;
	}
}

void	ft_check_dup(t_stack **s_a)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;
	int		j;

	i = 0;
	tmp1 = *s_a;
	tmp = *s_a;
	while (tmp)
	{
		tmp1 = *s_a;
		j = 0;
		while (tmp1)
		{
			if (tmp->cnt == tmp1->cnt && i != j)
			{
				ft_lstclear(s_a);
				ft_error_writer("Error\n");
			}
			j++;
			tmp1 = tmp1->next;
		}
		i++;
		tmp = tmp->next;
	}
}
