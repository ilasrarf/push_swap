/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:15 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/21 22:33:22 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*alloc;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	alloc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!alloc)
		return (0);
	while (s1[i])
	{
		alloc[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		alloc[i] = s2[j];
		j++;
		i++;
	}
	alloc[i++] = ' ';
	alloc[i] = '\0';
	return (free(s1), alloc);
}
