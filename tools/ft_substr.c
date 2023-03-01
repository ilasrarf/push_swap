/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:18:49 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/15 23:07:28 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char *s, int start, int len)
{
	int				i;
	char			*alloc;

	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	alloc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (0);
	while (i < len)
	{
		alloc[i] = s[start + i];
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
