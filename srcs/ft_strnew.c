/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:14:20 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 14:18:04 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	fresh = (char *)malloc(sizeof(char) * (size + 1));
	if (fresh)
	{
		ft_memset(fresh, '\0', size + 1);
		return (fresh);
	}
	return (NULL);
}
