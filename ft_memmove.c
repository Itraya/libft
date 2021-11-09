/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:45:07 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/04 11:45:08 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (0);
	if (a > b)
	{
		i = len;
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
		return (a);
	}
	while (i < len)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
