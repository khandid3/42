/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:52:53 by rdomingu          #+#    #+#             */
/*   Updated: 2021/11/05 10:53:21 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	while ((s[i]) && (i < n))
	{
		if (s[i] == (unsigned char)(c))
		{
			while (s[i])
			{
				ret[j] = s[i];
				i++;
				j++;
			}
		return (ret);
		}
	}
	return (NULL);	
}
