#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	if (size > ft_strlen(dst))
	{
		return (size + ft_strlen(src));
	}
	return (ft_strlen(dst) + ft_strlen(src));


}
