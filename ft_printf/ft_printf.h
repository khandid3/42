/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:09:43 by rdomingu          #+#    #+#             */
/*   Updated: 2022/05/04 15:23:46 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_hexa_x(unsigned long n);

int	ft_hexa_xx(unsigned long n);

int	ft_p(unsigned long n);

int	ft_putnbr_d(int n);

int	ft_putnbr_u(unsigned int n);

#endif
