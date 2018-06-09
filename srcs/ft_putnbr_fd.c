/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:17:03 by alyle             #+#    #+#             */
/*   Updated: 2018/06/09 15:43:07 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n < -10)
			ft_putnbr_fd(n / -10, fd);
		ft_putchar_fd(-(n % 10) + '0', fd);
	}
	else
	{
		if (n / 10 == 0)
			ft_putchar_fd(n + '0', fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd((n % 10) + '0', fd);
		}
	}
}
