/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:00:03 by rdomingu          #+#    #+#             */
/*   Updated: 2021/12/17 19:11:15 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jointure;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	jointure = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!jointure)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		jointure[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		jointure[i] = s2[j];
		i++;
		j++;
	}
	jointure[i] = '\0';
	return (jointure);
}
/*sinon faire :
 jointure = ft_calloc(...)
 ft_strlcat(jointure, s1)
 ft_strlcat(jointure, s2) ==> car jointure contient deja s1
 ...
 */
