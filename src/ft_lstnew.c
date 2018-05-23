#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		if (content)
		{
			tmp->content = content;
			tmp->content_size = content_size;
		}
		else
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		return (tmp);
	}
	return (NULL);
}
