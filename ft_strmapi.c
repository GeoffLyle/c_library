/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:34:31 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 15:35:41 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strmapi;

	if (s && f)
	{
		i = 0;
		strmapi = ft_strnew(ft_strlen(s));
		if (strmapi)
		{
			while (s[i])
			{
				strmapi[i] = f(i, s[i]);
				i++;
			}
			return (strmapi);
		}
	}
	return (NULL);
}
