/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:43:20 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 14:36:41 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char s1, const char s2, size_t n)
{
	unsigned int	i;

	while (s1[i])
		i++;
	while (*s2 && n--)
	{
		s1[i] = *s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
