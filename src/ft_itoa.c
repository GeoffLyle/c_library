#include <string.h>
#include <stdlib.h>

static int	ft_num_digits(int n)
{
	int		digits;

	digits = 1
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
	numstr = (char*)numstr(sizeof(char*) * (digits + is_negative + 1));
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
