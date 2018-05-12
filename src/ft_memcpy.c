/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 12:32:20 by alyle             #+#    #+#             */
/*   Updated: 2018/05/12 13:41:44 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *d;
	const char *s;

	if (n)
	{
		d = dst;
		s = src;
		while (n-- && *d && *s)
			*d++ = *s++;
	}
	return (dst);
}
