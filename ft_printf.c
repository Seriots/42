/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:28:02 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 15:26:18 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include "conversion.h"
#include <stdio.h>

int	ft_count_elem(const char *s)
{
	int	count;
	int	i;

	count = 0;
	while (s[i])
	{
		else if (s[i] == '%')
		{
			if (s[i + 1] == '%')
				i ++;
			else
				count ++;
		}
		i ++;
	}
	return (count);
}

int ft_printf(const char *s, ...)
{
	va_list	ap;
	t_arg	*all_elem;
	int		count_elem;
	char	*str;
	
	if (!s)
		return (0);
	count_elem = ft_count_elem(s);
	all_elem = malloc(sizeof(t_arg) * (count + 1));
	if (!all_elem)
		return (0);
	
}
