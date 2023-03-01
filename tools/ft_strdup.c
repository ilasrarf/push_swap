/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:47:06 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/15 22:45:01 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	int		i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*alloc;
	int		i;
	int		str_len;

	str_len = ft_strlen(str);
	i = 0;
	alloc = (char *)malloc((str_len + 1) * sizeof(char));
	if (!alloc)
		return (0);
	return (ft_memcpy(alloc, str, str_len + 1));
}
