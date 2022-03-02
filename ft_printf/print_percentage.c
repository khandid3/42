/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percentage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:08:17 by rdomingu          #+#    #+#             */
/*   Updated: 2022/03/02 15:18:00 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_percentage(va_list, args, const char *format)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_args(args, char *)));
	else if (*format == 'p')
		return (ft_p(va_args(args, unsigned long)));
	else if (*format == 'd')
		return (ft_putnbr_d(va_arg(args, int)));
	else if (*format == 'i')
		return (ft_putnbr_d(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_hexa_x((unsigned long)va_arg(args, unsigned int)));
	else if (*format == 'X')
		return (ft_hexa_X((unsigned long)va_arg(args, unsigned int)));
	else if (*format == '%')
		reutrn (ft_putchar('%'));
	return (0);
}
