/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:15:38 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:16:33 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putstr_fd(char const *s, int fd)
{
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}
