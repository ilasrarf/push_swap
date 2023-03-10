/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:50:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 17:52:20 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_to_sort(t_var *var, t_stack **s_a, t_stack **s_b)
{
	if (var->size_a > 5)
	{
		ft_first_push_to_b(var, s_a, s_b);
		ft_final_sort(s_a, s_b);
	}
	else if (var->size_a == 3)
		ft_sort_3(s_a);
	else if (var->size_a == 5)
		ft_sort_5(s_a, s_b);
	else if (var->size_a == 4)
		ft_sort_4(s_a, s_b);
	else if (var->size_a == 2)
		ft_sa(s_a);
}

void	pars(char **args, t_stack **s_a)
{
	char	*str;
	char	**tab;
	int		i;

	ft_error_char(args);
	str = ft_strdup("");
	i = 1;
	while (args[i])
	{
		str = ft_strjoin(str, args[i]);
		i++;
	}
	i = 0;
	tab = ft_split(str, ' ');
	free (str);
	*s_a = ft_lstnew(ft_atoi(tab[i++], s_a), -1);
	while (tab[i])
		ft_lstadd_back(s_a, ft_lstnew(ft_atoi(tab[i++], s_a), -1));
	ft_free(tab);
	ft_check_dup(s_a);
	ft_sort_index(*s_a);
}

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	t_var	var;

	var.size_b = 0;
	if (ac <= 1)
		return (0);
	pars(av, &s_a);
	ft_deja_msorty(&s_a);
	var.size_a = ft_lstsize(s_a);
	ft_case_to_sort(&var, &s_a, &s_b);
	ft_lstclear(&s_a);
}
