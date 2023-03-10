/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deja_msorty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 03:25:29 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 15:44:37 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_deja_msorty(t_stack **s_a)
{
	int		cnt;
	t_stack	*tmp;

	cnt = 1;
	tmp = (*s_a);
	while ((*s_a)->next)
	{
		if ((*s_a)->i < (*s_a)->next->i)
			cnt++;
		(*s_a) = (*s_a)->next;
	}
	(*s_a) = tmp;
	if (cnt == ft_lstsize(*s_a))
	{
		ft_lstclear(s_a);
		exit(0);
	}
}
