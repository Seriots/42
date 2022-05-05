/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:20:08 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 14:41:00 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# define BASE_HEXA_MIN "0123456789abcdef"
# define BASE_HEXA_MAJ "0123456789ABCDEF"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_putchar(char c);
void	ft_putstr(const char *s, int champ);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putpointeur(void	*p);
#endif