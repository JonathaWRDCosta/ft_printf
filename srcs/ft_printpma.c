/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpma.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:09:01 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:19 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_hex(unsigned long address, char *buffer)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	if (address == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return ;
	}
	while (address)
	{
		buffer[i++] = hex[address % 16];
		address /= 16;
	}
	buffer[i] = '\0';
}

void	ft_printpma(void *ptr, int *j)
{
	unsigned long	address;
	char			buffer[17];
	int				i;
	int				len;

	if (!ptr)
	{
		ft_putstr("(nil)", j);
		return ;
	}
	address = (unsigned long)ptr;
	ft_putstr("0x", j);
	ft_hex(address, buffer);
	len = 0;
	while (buffer[len])
		len++;
	i = len;
	while (i > 0)
		ft_putchar(buffer[--i], j);
}
