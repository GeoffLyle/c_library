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

#include <stdlib.h>
#include <string.h>

static int	get_count(char const *s, int count, int start)
{
	int		i;
	int		seek;

	i = start;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			seek = i;
			while (s[seek])
			{
				if (s[seek] != ' ' || s[seek] != '\n' || s[seek] != '\t')
				{
					count += seek - i - 1;
					break ;
				}
			}
			i = seek - 1;
		}
		else
			count++;
		i++;
	}
	return (count);
}

char		*ft_strtrim(char const *s)
{
	char	*trimstr;
	int		count;
	int		start;

	start = 0;
	count = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	count = get_count(s, count, start);
	trimstr = (char *)malloc(sizeof(char *) * (count + 1));
	if (trimstr)
	{
		while (count--)
			*trimstr++ = s[start++];
		*trimstr = '\0';
		return (trimstr);
	}
	return (NULL);
}
