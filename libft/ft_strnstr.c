/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:11:58 by rdomingu          #+#    #+#             */
/*   Updated: 2021/11/05 11:31:50 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle == '\0')
		return (haystack);
	while (i < len)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return (needle);
		return (NULL);
	}
}
