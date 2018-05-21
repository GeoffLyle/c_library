#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, '-', 1);
		if (n == -2147483648)
		{
			write(fd, '2', 1);
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10 == 0)
		write(fd, n + '0', 1);
	else
	{
		write(fd, n / 10, 1);
		ft_putchar(n % 10 + '0');
	}
}

