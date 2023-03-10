/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_chank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:27:57 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/08 14:53:37 by ilasrarf         ###   ########.fr       */
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

void	ft_first_push_to_b(t_var *var, t_stack **s_a, t_stack **s_b)
{
	int		i;
	int		j;
	int		rang;
	int		h;
	t_stack	*tmp;

	h = 0;
	tmp = *s_a;
	if (ft_lstsize(*s_a) <= 100)
		rang = var->size_a / 5;
	else
		rang = var->size_a / 9;
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

// void	ft_first_push_to_b(t_var *var, t_stack **s_a, t_stack **s_b)
// {
// 	int		i;
// 	int		j;
// 	int		rang;
// 	int		h;
// 	t_stack	*tmp;

// 	h = 0;
// 	tmp = *s_a;
// 	if (ft_lstsize(*s_a) <= 100)
// 		rang = var->size_a / 5;
// 	else
// 		rang = var->size_a / 9;
// 	i = 1;
// 	j = rang;
// 	while (*s_a)
// 	{
// 		if ((*s_a)->i >= i && (*s_a)->i <= j)
// 		{
// 			h++;
// 			if ((*s_a)->i <= (i + j) / 2)
// 				ft_pb(s_a, s_b);
// 			else
// 			{
// 				ft_pb(s_a, s_b);
// 				ft_rb(s_b);
// 			}
// 		}
// 		else
// 			ft_ra(s_a);
// 		if (h == rang)
// 		{
// 			h = 0;
// 			i = i + rang;
// 			j = j + rang;
// 		}
// 	}
// 	*s_a = tmp;
// }
