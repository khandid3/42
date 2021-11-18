#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		l;
	int		n;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	i = 0;
	tab = malloc(sizeof(char) * (ft_strlen(s) - n));
	if (!tab)
		return (NULL);
	if (ft_charisinstr(c, s) == 0)
	{
		while (s[i++])
			tab[0][i] = s[i];
		return (tab);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			while (k < i)
			{
				tab[j][l] = s[k];
				k++;
				l++;
			}
			k++;
			j++;
			l = 0;
		}
		i++;
	}
	tab[j][k] =	NULL;
	return (tab);
}
