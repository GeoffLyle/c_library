/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:20:33 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:14:54 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	if (c == '\0')
		return ((char *)s);
	while (i)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
