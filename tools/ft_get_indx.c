/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_indx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:41:35 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/03 01:02:59 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_max_index(t_stack **stk)
{
	t_stack *tmp;
	int		i;

	tmp = *stk;
	i = 0;
	while (*stk)
	{
		if ((*stk)->i > i)
			i = (*stk)->i;
		(*stk) = (*stk)->next;
	}
	*stk = tmp;
	return (i);
}