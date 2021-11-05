/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:32:04 by rdomingu          #+#    #+#             */
/*   Updated: 2021/11/05 12:17:19 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char* str)
{
	int	i;
	int	signe;
	int	ret;


	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	signe = 1;
	while (str[i] == '-' || str[i]== '+')
	{
		if (str[i++] == '-')
			signe = signe * -1;
	}
	ret = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (signe * ret);
}
