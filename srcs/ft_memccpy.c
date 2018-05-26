/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 14:17:26 by alyle             #+#    #+#             */
/*   Updated: 2018/05/12 16:11:43 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	char		*d;
	const char	*s;

	if (n)
	{
		d = dst;
		s = src;
		while (n-- && *s != c)
			*d++ = *s++;
	}
	return (dst);
}
