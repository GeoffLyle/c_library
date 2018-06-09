/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:56:18 by alyle             #+#    #+#             */
/*   Updated: 2018/06/09 15:26:42 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_copy_word(char *dest, char const *src, char c, int j)
{
	int		i;

	i = 0;
	while (src[j] && src[j] != c)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (j);
}

static int		ft_count_words(char const *str, char c)
{
	int		count;
	int		on;

	on = 1;
	count = 0;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		if (*str != c)
		{
			if (on)
			{
				count++;
				on = 0;
			}
		}
		else
			on = 1;
		str++;
	}
	return (count);
}

static int		ft_wl(char const *s, char c, int start)
{
	int		wordlen;

	wordlen = 0;
	while (s[start] && s[start] != c)
	{
		wordlen++;
		start++;
	}
	return (wordlen);
}

static char		**ft_copywords(char const *s, char c, char **sa)
{
	int		j;
	int		word;

	word = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
			j++;
		else
		{
			sa[word] = ft_strnew(ft_wl(s, c, j));
			if (!sa[word])
				return (NULL);
			j = ft_copy_word(sa[word++], s, c, j);
		}
	}
	sa[word] = 0;
	return (sa);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**sa;

	if (s)
	{
		sa = malloc(sizeof(char*) * (ft_count_words(s, c) + 1));
		if (sa)
		{
			if (ft_copywords(s, c, sa))
				return (sa);
		}
	}
	return (NULL);
}
