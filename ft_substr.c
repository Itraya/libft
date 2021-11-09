/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:09:03 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/06 10:17:07 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	if (i < len)
		a = malloc(i + 1);
	else
		a = malloc(len + 1);
	if (!a)
		return (0);
	if (start >= i)
	{
		a[0] = '\0';
		return (a);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
