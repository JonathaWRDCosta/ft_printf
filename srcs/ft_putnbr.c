/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:47:46 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:17 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nb, int *j)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", j);
		return ;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0', j);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, j);
		ft_putnbr(nb % 10, j);
	}
	else if (nb < 0)
	{
		ft_putchar('-', j);
		ft_putnbr(nb * -1, j);
	}
}
