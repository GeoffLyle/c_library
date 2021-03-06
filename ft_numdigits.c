/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 15:56:03 by alyle             #+#    #+#             */
/*   Updated: 2018/06/09 16:21:45 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numdigits(int n)
{
	size_t	digits;

	digits = 1;
	while (n /= 10)
		digits++;
	return (digits);
}
