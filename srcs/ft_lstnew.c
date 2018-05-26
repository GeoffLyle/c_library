/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:25:00 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 17:15:57 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		if (content)
		{
			tmp->content = (void *)content;
			tmp->content_size = content_size;
		}
		else
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		return (tmp);
	}
	return (NULL);
}
