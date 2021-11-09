/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:18:08 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/09 10:40:04 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlenn(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ret;
	char	*a;

	a = (char *)haystack;
	i = 0;
	j = 0;
	ret = 0;
	if (len == 0 && (ft_strlenn(haystack) == 0 || ft_strlenn(needle) == 0))
		return (a);
	if (a[0] == '\0' && needle[0] == '\0')
		return (a);
	while (i < len && haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == 0)
			return (&a[i]);
		i++;
		j = 0;
	}
	return (0);
}
