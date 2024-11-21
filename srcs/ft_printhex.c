/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:35:26 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:20 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_printhex_lc(unsigned int nb, int *j)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_printhex_lc(nb / 16, j);
	ft_putchar(hex[nb % 16], j);
}

static void	ft_printhex_uc(unsigned int nb, int *j)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb >= 16)
		ft_printhex_uc(nb / 16, j);
	ft_putchar(hex[nb % 16], j);
}

void	ft_printhex(unsigned int nb, int *j, const char *format)
{
	if (*format == 'x')
		ft_printhex_lc(nb, j);
	else if (*format == 'X')
		ft_printhex_uc(nb, j);
}
