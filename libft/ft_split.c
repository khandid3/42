#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (! *str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			words++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
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
		while (str[i] == c)
			i++;
		result[j] = ft_substr(str, start, len);
		j++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *str, char c)
{
	char	**result;

	result = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	if (! *str)
		result[0] = NULL;
	else
		make_split(result, str, c);
	return (result);
}
