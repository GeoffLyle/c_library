#include <unistd.h>

static void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(const char *s)
{
	while (*s != '\0')
		ft_putchar(*s++);
	ft_putchar('\n');
}
