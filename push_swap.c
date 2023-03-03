/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:50:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/03 18:10:51 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(t_stack *s_a)
{
	t_stack	*u;

	u = s_a;
	while (s_a)
	{
		printf("%d----", s_a->cnt);
		printf("%d\n", s_a->i);
		s_a = s_a->next;
	}
	s_a = u;
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
	ft_smap_signe(tab);
	free (str);
	*s_a = ft_lstnew(ft_atoi(tab[i++]), -1);
	while (tab[i])
		ft_lstadd_back(s_a, ft_lstnew(ft_atoi(tab[i++]), -1));
	ft_free(tab);
	ft_check_dup(s_a);
	ft_sort_index(*s_a);
}

void	ff(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	t_var	var;

	var.size_b = 0;
	if (ac <= 2)
		return (ft_error_writer("!!ERROR!!"), 0);
	pars(av, &s_a);
	var.size_a = ft_lstsize(s_a);
	ft_first_push_to_b(&var, &s_a, &s_b);
	ft_final_sort(&s_a, &s_b);
	ft_print(s_b);
}
