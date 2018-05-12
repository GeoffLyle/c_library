/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 17:57:22 by alyle             #+#    #+#             */
/*   Updated: 2018/05/12 12:24:22 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	if (n)
	{
		str = s;
		while (n--)
			*str++ = 0;
	}
	return (s);
}
