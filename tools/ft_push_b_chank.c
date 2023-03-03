/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_chank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:27:57 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/03 02:14:32 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_first_push_to_b(t_var *var, t_stack **s_a, t_stack **s_b)
{
	int		i;
	int		j;
	int		rang;
	int		h;
	t_stack	*tmp;

	h = 0;
	tmp = *s_a;
	rang = var->size_a / 5;
	i = 1;
	j = rang;
	while (*s_a)
	{
		if ((*s_a)->i >= i && (*s_a)->i <= j)
		{
			h++;
			if ((*s_a)->i <= (i + j) / 2)
				ft_pb(s_a, s_b);
			else
			{
				ft_pb(s_a, s_b);
				ft_rb(s_b);
			}
		}
		else
			ft_ra(s_a);
		if (h == rang)
		{
			h = 0;
			i = i + rang;
			j = j + rang;
		}
	}
	*s_a = tmp;
}
