/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 16:17:55 by alyle             #+#    #+#             */
/*   Updated: 2018/03/17 00:07:21 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	hold;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		hold = str[len];
		str[len] = str[i];
		str[i] = hold;
		i++;
		len--;
	}
	return (str);
}
