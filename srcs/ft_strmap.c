/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:24:11 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 15:35:42 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*strmp;
	int				i;
	
	i = 0;
	if (s && f)
	{
		strmp = ft_strnew(ft_strlen(s));
		if (strmp)
		{
			while (s[i])
			{
				strmp[i] = f(s[i]);
				i++;
			}
			return (strmp);
		}
	}
	return (NULL);
}
