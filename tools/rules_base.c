/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:34:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/01 22:01:43 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stk)
{
	int	tmp;

	if (!*stk || !(*stk)->next)
		return ;
	tmp = (*stk)->cnt;
	(*stk)->cnt = (*stk)->next->cnt;
	(*stk)->next->cnt = tmp;
	tmp = (*stk)->i;
	(*stk)->i = (*stk)->next->i;
	(*stk)->next->i = tmp;
}

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	ft_lstadd_front(dest, ft_lstnew((*src)->cnt, (*src)->i));
	*src = (*src)->next;
	free(tmp);
}

void	ft_rotate(t_stack **stk)
{
	t_stack	*tmp;

	if (!*stk || !(*stk)->next)
		return ;
	tmp = *stk;
	ft_lstadd_back(stk, ft_lstnew((*stk)->cnt, (*stk)->i));
	*stk = (*stk)->next;
	free(tmp);
}

void	ft_revers(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*gg;

	if (!*stk || !(*stk)->next)
		return ;
	tmp = *stk;
	while (tmp->next)
		tmp = tmp->next;
	ft_lstadd_front(stk, ft_lstnew(tmp->cnt, tmp->i));
	gg = *stk;
	while ((*stk)->next->next)
		*stk = (*stk)->next;
	(*stk)->next = NULL;
	*stk = gg;
	free(tmp);
}
