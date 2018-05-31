/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 14:17:26 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 21:26:38 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (n)
	{
		d = dst;
		s = src;
		while (n--)
		{
			*d++ = *s;
			if (*s++ == (unsigned char) c)
				return ((void *) d);
		}
	}
	return (NULL);
}
