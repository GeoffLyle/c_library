/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 14:38:21 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 21:25:22 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (len)
	{
		d = dst;
		s = src;
		if (s < d)
		{
			d += len;
			s += len;
			while (len--)
				*--d = *--s;
		}
		else
		{
			while (len--)
				*d++ = *s++;
		}
	}
	return (dst);
}
