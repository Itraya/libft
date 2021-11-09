/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:03:08 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/09 10:36:17 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	a = *lst;
	while (a->next)
	{
		b = a->next;
		(*del)(a->content);
		free(a);
		a = b;
	}
	(*del)(a->content);
	free(a);
	*lst = NULL;
}
