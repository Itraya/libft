/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:44:36 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/06 10:33:45 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		r;
	char	*a;

	if (!s || s[0] == '\0')
		return (0);
	i = 0;
	r = -1;
	a = (char *)s;
	while (a[i])
	{
		if (a[i] == (unsigned char)c)
			r = i;
		i++;
	}
	if (a[i] == (unsigned char)c)
		r = i;
	if (r == -1)
		return (0);
	return (&a[r]);
}
