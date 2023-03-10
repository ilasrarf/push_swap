/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:27:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 19:05:00 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_pos(t_stack *stk, int indx)
{
	int		i;
	t_stack	*tmp;

	tmp = stk;
	i = 1;
	while (stk)
	{
		if (stk->i == indx)
		{
			stk = tmp;
			return (i);
		}
		i++;
		stk = stk->next;
	}
	stk = tmp;
	return (0);
}

void	ft_set_null(int size, t_stack **s_a)
{
	t_stack	*tmp;

	tmp = (*s_a);
	while (size > 1)
	{
		size--;
		(*s_a) = (*s_a)->next;
	}
	(*s_a)->next = NULL;
	(*s_a) = tmp;
}

void	ft_final_sort(t_stack **s_a, t_stack **s_b)
{
	int		max;
	int		be_max;
	int		size;

	size = ft_lstsize(*s_b);
	while (*s_b)
	{
		max = ft_get_pos(*s_b, ft_get_max_index(s_b));
		be_max = ft_get_pos(*s_b, ft_lstsize(*s_b) - 1);
		if (ft_cnt_inst(max, ft_lstsize(*s_b))
			< ft_cnt_inst(be_max, ft_lstsize(*s_b)))
			ft_push_too(s_a, s_b, ft_get_pos(*s_b, ft_get_max_index(s_b)));
		else
		{
			ft_push_too(s_a, s_b, ft_get_pos(*s_b, ft_get_be_max_index(s_b)));
			ft_push_too(s_a, s_b, ft_get_pos(*s_b, ft_get_max_index(s_b)));
			if ((*s_a)->i > (*s_a)->next->i)
				ft_sa(s_a);
		}
	}
	ft_set_null(size, s_a);
}
