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

#include <string.h>
#include <stdlib.h>

static int	ft_num_digits(int n)
{
	int		digits;

	digits = 1;
	while (n > 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
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
	numstr = (char*)malloc(sizeof(char*) * (digits + is_negative + 1));
	if (numstr)
	{
		numstr[digits + is_negative + 1] = '\0';
		while (n)
		{
			numstr[digits + is_negative] = n % 10;
			n /= 10;
			digits--;
		}
		if (is_negative)
			numstr[0] = '-';
		return (numstr);
	}
	return (NULL);
}
