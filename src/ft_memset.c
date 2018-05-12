#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	while(len)
	{
		*b = (unsigned char)c;
		b++;
		len--;
	}
	return (b);
}
