/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:50:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/01 21:57:02 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_var	var;

	var.size_b = 0;
	if (ac <= 2)
		return (ft_error_writer("!!ERROR!!"), 0);
	pars(av, &s_a);
	var.size_a = ft_lstsize(s_a);
	printf("%d", var.size_a);
}
