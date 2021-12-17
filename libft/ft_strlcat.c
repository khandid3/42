/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:03:43 by rdomingu          #+#    #+#             */
/*   Updated: 2021/12/17 19:03:44 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(dst);
	if (l >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && (l < dstsize - 1))
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (l - i + ft_strlen(src));
}
