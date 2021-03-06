/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 15:00:28 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 21:33:03 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	if (n)
	{
		src = s;
		while (n--)
		{
			if (*src == (unsigned char)c)
				return (void *)(src);
			src++;
		}
	}
	return (NULL);
}
