/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:24:33 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:47:21 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_check_format(const char *format, va_list arg, int *j)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%', j);
			if (*format == 'c')
				ft_putchar(va_arg(arg, int), j);
			if (*format == 's')
				ft_putstr(va_arg(arg, char *), j);
			if (*format == 'i' || *format == 'd')
				ft_putnbr(va_arg(arg, int), j);
			if (*format == 'X' || *format == 'x')
				ft_printhex(va_arg(arg, unsigned int), j, format);
			if (*format == 'p')
				ft_printpma(va_arg(arg, void *), j);
			if (*format == 'u')
				ft_printunsigned(va_arg(arg, unsigned int), j);
		}
		else
			ft_putchar(*format, j);
		format++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		j;
	va_list	arg;

	j = 0;
	va_start(arg, format);
	ft_check_format(format, arg, &j);
	va_end(arg);
	return (j);
}

int main(void)
{
	ft_printf("Test 1: \n");
	ft_printf("Hello, World!\n");

	ft_printf("Test 2: \n");
	ft_printf("Character: %c\n", 'A');

	ft_printf("Test 3: \n");
	ft_printf("String: %s\n", "Hello");

	ft_printf("Test 4: \n");
	ft_printf("Integer: %d\n", 42);

	ft_printf("Test 5: \n");
	ft_printf("Hexadecimal: %x\n", 255);


	int x = 42;
	ft_printf("Test 6: \n");
	ft_printf("Pointer: %p\n", &x);

	ft_printf("Test 7: \n");
	ft_printf("Unsigned: %u\n", 3000000000U);

	return 0;
}