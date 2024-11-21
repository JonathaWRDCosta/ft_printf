/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:38:49 by jonathro          #+#    #+#             */
/*   Updated: 2024/11/21 13:46:36 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *j);
void	ft_putstr(char *str, int *j);
void	ft_putnbr(int nb, int *j);
void	ft_printhex(unsigned int nb, int *j, const char *format);
void	ft_printpma(void *ptr, int *j);
void	ft_printunsigned(unsigned int nb, int *j);

#endif
