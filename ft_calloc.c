#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *ptr;

	if (size && num > (size_t) -1 / size)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}