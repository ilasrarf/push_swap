/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:33:03 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/02/15 22:56:23 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	if (mem)
		ft_bzero(mem, count * size);
	return (mem);
}
