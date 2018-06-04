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

static int	ft_num_digits(int n)
{
	int		digits;

	digits = 0;
	if (n < 0)
	{
		if (n > -10)
			return (1);
		n /= -10;
		digits++;
	}
	while (n >= 10)
	{
		n /= 10;
		digits++;
	}
	return (digits + 1);
}

char		*ft_itoa(int n)
{
	int		is_negative;
	char	*numstr;
	int		digits;

	is_negative = 0;
	digits = ft_num_digits(n);
	if (n < 0)
		is_negative = 1;
	numstr = ft_strnew(digits + is_negative);
	if (numstr)
	{
		while (n)
		{
			numstr[digits + is_negative - 1] = n % 10;
			n /= 10;
			digits--;
		}
		if (is_negative)
			numstr[0] = '-';
		return (numstr);
	}
	return (NULL);
}
