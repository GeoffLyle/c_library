/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 11:58:46 by alyle             #+#    #+#             */
/*   Updated: 2018/05/12 16:52:59 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strdup(const char *src)
{
	int		srclen;
	char	*str;

	srclen = 0;
	while (src[srclen])
		srclen++;
	str = (char*)malloc(sizeof(*str) * (srclen + 1));
	ft_strcpy(str, src);
	return (str);
}