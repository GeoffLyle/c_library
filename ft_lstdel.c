/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:25:15 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:32:53 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *tmp;

	if (*alst)
	{
		list = *alst;
		while (list)
		{
			del(list->content, list->content_size);
			tmp = list->next;
			free(list);
			list = NULL;
			list = tmp;
		}
	}
	*alst = NULL;
}
