#include "libft.h"

char *strchr(const char *s, int c)
{
	int	i;
	int	j;
	char *resultat;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i])
			{
				resultat[j] = s[i];
				j++;
				i++;
				return (resultat);
			}
		}
		i++;
	}
	return (NULL);
}
