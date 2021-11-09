/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:55:03 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/06 10:30:47 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*a;

	if (alst != NULL && new != NULL)
	{
		if (*alst != NULL)
		{
			a = *alst;
			while (a->next)
			{
				a = a->next;
			}
			a->next = new;
		}
		else
			*alst = new;
	}
}
