/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:43:38 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/28 18:26:49 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_index(t_stack *s_a)
{
	t_stack	*tmp;

	tmp = s_a;
	while (tmp)
	{
		if (tmp->i == -1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	ft_init_min(t_stack *s_a)
{
	int	min;

	min = 0;
	while (s_a)
	{
		if (s_a->i == -1)
		{
			min = s_a->cnt;
			break ;
		}
		s_a = s_a->next;
	}
	return (min);
}

int	ft_get_min(t_stack *s_a)
{
	t_stack	*tmp;
	int		min;
	int		pos;
	int		i;

	tmp = s_a;
	i = 0;
	pos = 0;
	min = INT_MAX;
	s_a = tmp;
	while (s_a)
	{
		if ((s_a->i == -1) && (s_a->cnt <= min))
		{
			min = s_a->cnt;
			pos = i;
		}
		i++;
		s_a = s_a->next;
	}
	return (min);
}

void	ft_sort_index(t_stack *s_a)
{
	t_stack	*tmp;
	int		min;
	int		j;

	tmp = s_a;
	j = 1;
	while (ft_check_index(s_a))
	{
		min = ft_get_min(s_a);
		while (tmp)
		{
			if (min == tmp->cnt)
			{
				tmp->i = j++;
				break ;
			}
			tmp = tmp->next;
		}
		tmp = s_a;
	}
}

void	ft_def_index(t_stack *s_a)
{
	t_stack	*tmp;

	tmp = s_a;
	while (s_a)
	{
		s_a->i = -1;
		s_a = s_a->next;
	}
	s_a = tmp;
}
