/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:17:56 by alyle             #+#    #+#             */
/*   Updated: 2018/05/25 16:18:07 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putendl(const char *s)
{
	while (*s != '\0')
		ft_putchar(*s++);
	ft_putchar('\n');
}
