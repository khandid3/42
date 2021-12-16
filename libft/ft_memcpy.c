/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:49:42 by rdomingu          #+#    #+#             */
/*   Updated: 2021/10/27 11:50:18 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a revoir si fctn sinon faire classique

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void* restrict src, size_t n)
{r
	ft_memmove(dst, src, n);
	return (dst);
}
