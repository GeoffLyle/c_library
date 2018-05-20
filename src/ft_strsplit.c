/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:56:18 by alyle             #+#    #+#             */
/*   Updated: 2018/05/19 17:46:10 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_copy_word(char *dest, char *src, int j)
{
	int		i;

	i = 0;
	while (src[j] != '\0' && src[j] != ' ' && src[j] != '\n' && src[j] != '\t')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (j);
}

static int		ft_count_words(char *str, char c)
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

int				ft_wl(char const *s, char c, int start)
{
	int		wordlen;

	while (*s && *s != c)
		wordlen++;
	return (wordlen);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**sa;
	int		word;
	int		j;

	sa = malloc(sizeof(char*) * (ft_count_words(s, c) + 1));
	if (sa)
	{
		word = 0;
		j = 0;
		while (count)
		{
			if (s[j] == c)
				j++;
			else
			{
				sa[word] = (char*)malloc(sizeof(char*) * (ft_wl(s, c, j) + 1));
				if (!sa[word])
					return (NULL);
				j = ft_copy_word(sa[word++], str, j);
			}
		}
		sa[word] = 0;
		return (sa);
	}
	return (NULL);
}
