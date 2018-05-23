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

#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	strlen;
	unsigned int	i;
	char			*strmapi;

	strlen = 0;
	i = 0;
	while (s[strlen])
		strlen++;
	strmapi = (char *)malloc(sizeof(char *) * (strlen + 1));
	while (i < strlen)
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}
