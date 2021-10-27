#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int l;
	int	k;
	char *resultat;

	k = 0;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (char)(c))
		{
			while (s[l])
			{
				resultat[k] = s[l];
				l--;
				k++;
				return (resultat);
			}
		}
		l--;
	}
	return (NULL);
}
