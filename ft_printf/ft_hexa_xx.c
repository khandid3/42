/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:39:45 by rdomingu          #+#    #+#             */
/*   Updated: 2022/03/08 16:55:59 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_xx(unsigned long n)
{
	int		letter;
	char	hexa;
	int		charcount;

	charcount = 0;
	letter = 65;
	if (n >= 16)
		charcount += ft_hexa_xx(n / 16);
	hexa = n % 16;
	if (hexa > 9)
		charcount += ft_putchar(hexa - 10 + letter);
	else
		charcount += ft_putchar(hexa + 48);
	return (charcount);
}
