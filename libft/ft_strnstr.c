/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:11:58 by rdomingu          #+#    #+#             */
/*   Updated: 2021/11/17 11:53:37 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i1;
	size_t i2;

	i1 = 0;
	i2 = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i1] && i1 < len)
	{
		if ((ft_strncmp(haystack +i1, needle, ft_strlen(needle)) == 0) && (ft_strlen(needle) + i1 <= len))
			return ((char *)&haystack[i1]);
		i1++;
	}
	return (NULL);
}
