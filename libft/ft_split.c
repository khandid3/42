/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:56:48 by rdomingu          #+#    #+#             */
/*   Updated: 2021/12/17 18:56:50 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (! *str)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	make_split(char **result, char const *str, char c)
{
	int		i;
	int		j;
	int		start;
	int		len;

	i = 0;
	j = 0;
	start = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		start = i;
		while (str[i] != c && str[i])
			i++;
		len = i - start;
		while (str[i] == c && c != '\0')
			i++;
		result[j] = ft_substr(str, start, len);
		j++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *str, char c)
{
	char	**result;

	if (!str)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	if (! *str)
		result[0] = NULL;
	else
		make_split(result, str, c);
	return (result);
}
