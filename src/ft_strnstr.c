/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:19:56 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 14:19:59 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i + j);
		i++;
		j = 0;
	}
	return (NULL);
}
