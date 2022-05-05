/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:39:41 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 14:08:28 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "../libft/libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((char)((n % 10) + 48));		
}

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((char)((n % 10) + 48));	
}

/*int	main(void)
{
	ft_putnbr(99);
	write(1, "\n", 1);
	ft_putnbr_unsigned(99);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr_unsigned(-42);
	write(1, "\n", 1);
}*/