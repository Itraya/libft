/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:08:28 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/06 10:30:34 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*remp(char *tab, int nb, int l, int s)
{
	long int	n;

	n = nb;
	if (n < 0)
		n = n * -1;
	while (l-- > s)
	{
		tab[l] = (n % 10) + '0';
		n = n / 10;
	}
	if (l == 0)
		tab[0] = '-';
	return (tab);
}

char	*ft_itoa(int n)
{
	int				l;
	int				s;
	long int		nb;
	char			*a;

	l = 0;
	s = 0;
	nb = n;
	if (n < 0)
		nb = nb * -1 + s++;
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	if (n == 0)
		l = 1;
	a = malloc(l + s + 1);
	if (!a)
		return (0);
	a[l + s] = '\0';
	return (remp(a, n, l + s, s));
}
