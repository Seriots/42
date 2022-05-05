/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:49:39 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 15:25:09 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

void	ft_puthexa_min(unsigned int n)
{
	if (n > 15)
		ft_puthexa_min(n / 16);
	ft_putchar((char)(BASE_HEXA_MIN[n % 16]));
}

void	ft_puthexa_maj(unsigned int n)
{
	if (n > 15)
		ft_puthexa_maj(n/ 16);
	ft_putchar((char)(BASE_HEXA_MAJ[n % 16]));
}

int	main()
{
	int n = -21478958478;
	printf("printf = %x, %X\n", n, n);
	ft_puthexa_min(n);
	ft_putchar('\n');
	ft_puthexa_maj(n);
}