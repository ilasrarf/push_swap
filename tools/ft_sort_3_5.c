/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 03:00:45 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/04 19:45:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_3(t_stack **s_a)
{
	if ((*s_a)->i > (*s_a)->next->i
		&& (*s_a)->next->i < (*s_a)->next->next->i
		&& (*s_a)->next->next->i > (*s_a)->i)
		ft_sa(s_a);
	else if ((*s_a)->i > (*s_a)->next->i
		&& (*s_a)->next->i > (*s_a)->next->next->i
		&& (*s_a)->next->next->i < (*s_a)->i)
	{
		ft_sa(s_a);
		ft_rra(s_a);
	}
	else if ((*s_a)->i > (*s_a)->next->i
		&& (*s_a)->next->i < (*s_a)->next->next->i
		&& (*s_a)->next->next->i < (*s_a)->i)
		ft_ra(s_a);
	else if ((*s_a)->i < (*s_a)->next->i
		&& (*s_a)->next->i > (*s_a)->next->next->i
		&& (*s_a)->next->next->i > (*s_a)->i)
	{
		ft_sa(s_a);
		ft_ra(s_a);
	}
	else if ((*s_a)->i < (*s_a)->next->i
		&& (*s_a)->next->next->i < (*s_a)->next->i
		&& (*s_a)->next->next->i < (*s_a)->i)
		ft_rra(s_a);
}

void	ft_push_to_sort_5(t_stack **s_a, t_stack **s_b, int indx)
{
	int	zero;
	int	size;

	zero = ft_get_pos(*s_a, indx);
	size = ft_lstsize(*s_a);
	if (zero <= 3)
	{
		while ((*s_a)->i != indx)
			ft_ra(s_a);
	}
	else
	{
		while ((*s_a)->i != indx)
			ft_rra(s_a);
	}
	ft_pb(s_a, s_b);
}

void	ft_sort_5(t_stack **s_a, t_stack **s_b)
{
	ft_push_to_sort_5(s_a, s_b, 1);
	ft_push_to_sort_5(s_a, s_b, 2);
	ft_sort_3(s_a);
	ft_pa(s_a, s_b);
	ft_pa(s_a, s_b);
}

void	ft_sort_4(t_stack **s_a, t_stack **s_b)
{
	ft_push_to_sort_5(s_a, s_b, 1);
	ft_sort_3(s_a);
	ft_pa(s_a, s_b);
}
