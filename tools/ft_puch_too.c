/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puch_too.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:24:18 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/03 01:06:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_too(t_stack **s_a, t_stack **s_b, int pos)
{
	int	size;
	int	i;

	size = ft_lstsize(*s_b);
	i = ft_cnt_inst(pos, size);
	if (pos <= size / 2)
	{
		while (i > 0)
		{
			ft_rb(s_b);
			i--;
		}
		ft_pa(s_a, s_b);
	}
	else
	{
		while (i > 0)
		{
			ft_rrb(s_b);
			i--;
		}
		ft_pa(s_a, s_b);
	}
}
