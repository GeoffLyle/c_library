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

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if (s)
	{
		substr = ft_strnew(len);
		if (substr)
		{
			i = 0;
			while (len--)
			{
				substr[i] = s[start + i];
				i++;
			}
			return (substr);
		}
	}
	return (NULL);
}
