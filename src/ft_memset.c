#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	conv;

	conv = c;
	while(str && len)
	{
		*str = conv;
		str++;
		len--;
	}
	return (str);
}
