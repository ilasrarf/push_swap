/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:44:26 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/01 18:31:30 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int cnt, int i)
{
	t_stack	*n1;

	n1 = ft_calloc(1, sizeof(t_stack));
	if (n1)
	{
		n1->cnt = cnt;
		n1->i = i;
	}
	return (n1);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (!new || !lst)
		return ;
	temp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_stack *lst)
{
	if (lst)
		return (1 + ft_lstsize(lst->next));
	return (0);
}
