/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:05:23 by rdomingu          #+#    #+#             */
/*   Updated: 2021/10/13 13:05:26 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90) || (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_isalpha('k'));
}
*/
