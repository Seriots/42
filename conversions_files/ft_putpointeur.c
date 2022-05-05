/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:16:03 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 15:25:14 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

static void	ft_writepointeur(unsigned long addr)
{
	if (addr > 15)
		ft_writepointeur(addr / 16);
	ft_putchar((char)(BASE_HEXA_MIN[addr % 16]));
}

void	ft_putpointeur(void	*p)
{
	unsigned long	addr;
	if (p == 0)
		write(1, "(nil)", 5);
	write(1, "0x", 2);
	addr = (unsigned long)p;
	ft_writepointeur(addr);
}

/*int		main(void)
{
	char	*s;
	
	s = malloc(1);
	printf("%p\n", s);
	ft_putpointeur(s);
}*/