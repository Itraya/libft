/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:21:58 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/06 10:34:49 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	i;
	char	*a;

	tab = malloc(count * size);
	if (!tab)
		return (0);
	a = (char *)tab;
	i = 0;
	while (i < (size * count))
	{
		a[i] = 0;
		i++;
	}
	return (tab);
}
