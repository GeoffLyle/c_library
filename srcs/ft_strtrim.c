/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:37:43 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 17:43:28 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_last_char(char const *s, int start)
{
	int		i;
	int		last;

	i = start;
	last = i;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			last = i;
		i++;
	}
	return (last);
}

char		*ft_strtrim(char const *s)
{
	char	*trimstr;
	int		last;
	int		start;
	int		i;

	if (s)
	{
		start = 0;
		last = 0;
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		last = find_last_char(s, start);
		trimstr = ft_strnew(last - start + 1);
		if (trimstr)
		{
			i = 0;
			while (start <= last)
				trimstr[i++] = s[start++];
			return (trimstr);
		}
	}
	return (NULL);
}
