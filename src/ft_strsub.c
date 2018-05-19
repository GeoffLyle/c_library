/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:06:55 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 16:18:41 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char)malloc(sizeof(char) * (len + 1));
	if (substr)
	{
		while (len--)
			*substr++ = s[start++];
		*substr = '\0';
		return (substr);
	}
	return (NULL);
}
