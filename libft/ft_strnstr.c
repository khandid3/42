/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:11:58 by rdomingu          #+#    #+#             */
/*   Updated: 2021/12/17 19:26:28 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*h;
	const char	*n;

	i = 0;
	j = 0;
	h = haystack;
	n = needle;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (!ft_strncmp(h + i, n, ft_strlen(n)) && (ft_strlen(n) + i <= len))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
