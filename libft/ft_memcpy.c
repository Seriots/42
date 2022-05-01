#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t  i;
	unsigned char *str;

	str = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*(str + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
