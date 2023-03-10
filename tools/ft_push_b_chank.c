/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_chank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:27:57 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 20:30:52 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_inde(t_stack **s_a, int i, int j)
{
	t_stack	*tmp;
	int		k;

	k = 0;
	tmp = *s_a;
	while (*s_a)
	{
		if ((*s_a)->i >= i && (*s_a)->i <= j)
		{
			*s_a = tmp;
			return (k);
		}
		k++;
		(*s_a) = (*s_a)->next;
	}
	return (k);
}

void	normin(t_norm *norm, t_stack **s_a, t_stack **s_b)
{
	if ((*s_a)->i >= norm->i && (*s_a)->i <= norm->j)
	{
		norm->h++;
		if ((*s_a)->i <= (norm->i + norm->j) / 2)
			ft_pb(s_a, s_b);
		else
		{
			ft_pb(s_a, s_b);
			ft_rb(s_b);
		}
	}
	else
		ft_ra(s_a);
}

void	ft_first_push_to_b(t_var *var, t_stack **s_a, t_stack **s_b)
{
	t_stack	*tmp;
	t_norm	*norm;

	norm = (t_norm *)ft_calloc(1, sizeof(t_norm));
	tmp = *s_a;
	if (ft_lstsize(*s_a) <= 100)
		norm->rang = var->size_a / 5;
	else
		norm->rang = var->size_a / 9;
	norm->i = 1;
	norm->j = norm->rang;
	while (*s_a)
	{
		normin(norm, s_a, s_b);
		if (norm->h == norm->rang)
		{
			norm->h = 0;
			norm->i = norm->i + norm->rang;
			norm->j = norm->j + norm->rang;
		}
	}
	*s_a = tmp;
}
