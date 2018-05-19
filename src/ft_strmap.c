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

#include <stdlib.h>
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	strlen;
	unsigned int	i;
	char			*strmap;

	strlen = 0;
	i = 0;
	while (s[strlen])
		strlen++;
	strmap = (char)malloc(sizeof(char) * (strlen + 1));
	while (i < strlen)
	{
		strmap[i] = f(s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}
