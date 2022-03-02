/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:12 by rdomingu          #+#    #+#             */
/*   Updated: 2022/03/02 15:09:27 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		charcount;
	va_list	args;

	i = 0;
	charcount = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			charcount += ft_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			charcount += print_percentage(args, &format[i]);
			i++;
		}
		va_end(args)
	}
	return (charcount);
}
