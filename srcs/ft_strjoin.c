/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:18:50 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 16:25:48 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;
	int		i;
	int		j;

	if (s1 && s2)
	{
		joinedstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (joinedstr)
		{
			i = 0;
			j = 0;
			while (s1[i])
				joinedstr[j++] = s1[i++];
			i = 0;
			while (s2[i])
				joinedstr[j++] = s2[i++];
			return (joinedstr);
		}
	}
	return (NULL);
}
