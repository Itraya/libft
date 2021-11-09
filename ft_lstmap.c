/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:44:32 by mlagrang          #+#    #+#             */
/*   Updated: 2021/11/09 10:37:16 by mlagrang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*u;
	t_list	*p;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = (*f)(lst->content);
	u = new;
	while (lst->next)
	{
		lst = lst->next;
		p = malloc(sizeof(t_list));
		if (!p)
			ft_lstclear(&new, (*del));
		p->content = (*f)(lst->content);
		u->next = p;
		u = p;
	}
	u->next = 0;
	return (new);
}
