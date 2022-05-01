#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (*(s + i))
        i ++;
    return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int     ft_strlcpy(char *dst, const char *src, int size)
{
    int i;

    i = 0;
    if (!src)
        return (0);
    if (size == 0)
        return (ft_strlen(src));
    while (i < size && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (ft_strlen(src));
}

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    if (!s)
        return ;
    i = -1;
    while (++i < n)
        *((unsigned char *)s + i) = 0;
}

void    ft_moveread(char *dest, const char *src)
{
    int  i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
    ft_bzero(dest + i, BUFFER_SIZE - i);
}