/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:22:06 by rdomingu          #+#    #+#             */
/*   Updated: 2022/04/21 15:45:43 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_d(int n)
{
	int	charcount;

	charcount = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			charcount += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
			charcount += ft_putnbr_d(n / 10);
		charcount += ft_putchar((n % 10) + '0');
	}
	return (charcount);
}
