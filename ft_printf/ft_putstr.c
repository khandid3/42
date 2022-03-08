/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:21:19 by rdomingu          #+#    #+#             */
/*   Updated: 2022/03/08 15:25:02 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	charcount;

	i = 0;
	charcount = 0;
	while (s)
	{
		write(1, &s[i], 1);
		i++;
		charcount++;
	}
	return (charcount);
}
