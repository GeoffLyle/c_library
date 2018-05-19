#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL)
}
