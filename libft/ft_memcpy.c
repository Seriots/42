/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:30:26 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/03 11:47:46 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*(str + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
