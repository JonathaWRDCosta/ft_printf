/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:54:46 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:18 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printunsigned(unsigned int nb, int *j)
{
	if (nb >= 10)
		ft_printunsigned(nb / 10, j);
	ft_putchar(nb % 10 + '0', j);
}
