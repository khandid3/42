/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:21:19 by rdomingu          #+#    #+#             */
/*   Updated: 2022/05/04 15:12:55 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	charcount;

	i = 0;
	charcount = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		charcount++;
	}
	return (charcount);
}
