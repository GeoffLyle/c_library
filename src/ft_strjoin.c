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

#include <string.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*joinedstr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joinedstr = (char)malloc(sizeof(char) * (s1len + s2len + 1));
	while (*s1)
		*joinedstr++ = *s1++;
	while (*s2)
		*joinedstr++ = *s2++;
	*joinedstr = '\0';
	return (joinedstr);
}
