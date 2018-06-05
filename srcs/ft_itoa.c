/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:19:38 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:19:39 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_digits(int n)
{
	size_t	digits;

	digits = 1;
	while (n /= 10)
		digits++;
	return (digits);
}

char			*ft_itoa(int n)
{
	char		*numstr;
	size_t		digits;
	int			is_negative;

	digits = ft_num_digits(n);
	is_negative = 1;
	if (n < 0)
	{
		digits++;
		is_negative = -1;
	}
	numstr = ft_strnew(digits);
	if (numstr)
	{
		numstr[--digits] = (n % 10) * is_negative + '0';
		while (n /= 10)
			numstr[--digits] = (n % 10) * is_negative + '0';
		if (is_negative < 0)
			numstr[0] = '-';
		return (numstr);
	}
	return (NULL);
}
