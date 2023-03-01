/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:42:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/01 22:01:57 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **s_a)
{
	ft_swap(s_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **s_b)
{
	ft_swap(s_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **s_a, t_stack **s_b)
{
	ft_swap(s_a);
	ft_swap(s_b);
	write(1, "ss\n", 3);
}

void	ft_pa(t_stack **s_a, t_stack **s_b)
{
	ft_push(s_b, s_a);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **s_a, t_stack **s_b)
{
	ft_push(s_a, s_b);
	write(1, "pb\n", 3);
}
