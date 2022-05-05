/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:24:27 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 13:58:18 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#define FLAG_BASE "0 +-#"

typedef	struct s_arg
{
	int	flags;
	int	min_champs;
	int	attribut;
} t_arg;

int ft_printf(const char *, ...);
# endif