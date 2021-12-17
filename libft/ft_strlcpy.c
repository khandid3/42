/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:03:54 by rdomingu          #+#    #+#             */
/*   Updated: 2021/12/17 19:03:55 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main()
{
	char	src[] = "cela est la source";
	char	dst[] = "ceci est la destination";
	char	src2[] = "cela est la source";
	char	dst2[] = "ceci est la destination";

	printf("%zu\n", ft_strlcpy(dst, src, 17));
	printf("%s\n", dst);
	printf("%d\n", (int)ft_strlcpy(dst2, src2, 17));
	printf("%s\n", dst2);
}
*/
