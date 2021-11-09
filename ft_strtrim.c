/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:56:13 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/09 10:40:28 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	if (set[i] == c)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*a;
	int		l[2];

	i = 0;
	while (!ft_check(s1[i], set) && s1[i])
		i++;
	if (!s1[i])
		i = 0;
	l[0] = i - 1;
	while (s1[i])
		i++;
	while (!ft_check(s1[i], set) && i >= 0)
		i--;
	l[1] = i;
	j = -1;
	a = malloc(l[1] - l[0] + 1);
	if (!a)
		return (0);
	while (++l[0] <= l[1] && l[1] > 0)
		a[++j] = s1[l[0]];
	a[++j] = '\0';
	return (a);
}
