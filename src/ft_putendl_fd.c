#include <unistd.h>

static void    ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char const *s, int fd)
{
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', 1);
}

