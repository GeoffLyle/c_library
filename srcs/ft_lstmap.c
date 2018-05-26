/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:42:16 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:48:12 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*maplist;

	while (lst)
	{
		ft_lstadd(&maplist, f(lst));
		lst = lst->next;
	}
	return (maplist);
}
