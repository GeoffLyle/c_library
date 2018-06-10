/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:41:39 by alyle             #+#    #+#             */
/*   Updated: 2018/06/10 15:11:02 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = s1len;
	if (s1len >= n)
		return (s2len + n);
	while (s2[j] && i + j < n - 1)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1len + s2len);
}
