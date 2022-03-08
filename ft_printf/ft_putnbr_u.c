/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:40:09 by rdomingu          #+#    #+#             */
/*   Updated: 2022/03/08 15:20:51 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	charcount;

	charcount = 0;
	if (n > 9)
		charcount += ft_putnbr_u(n / 10);
	charcount += ft_putchar((n % 10) + '0');
	return (charcount);
}
