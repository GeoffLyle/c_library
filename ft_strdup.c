/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 11:58:46 by alyle             #+#    #+#             */
/*   Updated: 2018/06/10 15:17:41 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		srclen;
	char	*str;

	srclen = 0;
	while (src[srclen])
		srclen++;
	str = (char*)malloc(sizeof(*str) * (srclen + 1));
	if (str)
	{
		ft_strcpy(str, src);
		return (str);
	}
	return (NULL);
}
