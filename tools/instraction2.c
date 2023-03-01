/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:17:11 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/01 18:31:48 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **s_a)
{
	ft_rotate(s_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **s_b)
{
	ft_rotate(s_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **s_a, t_stack **s_b)
{
	ft_rotate(s_a);
	ft_rotate(s_b);
	write(1, "rr\n", 3);
}

void	ft_rra(t_stack **s_a)
{
	ft_revers(s_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **s_b)
{
	ft_revers(s_b);
	write(1, "rrb\n", 4);
}
