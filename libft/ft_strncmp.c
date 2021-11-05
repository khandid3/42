#include "libft.h"

int	ft_charcmp(char c1, char c2)
{
	c1 = (unsigned char)c1;
	c2 = (unsigned char)c2;
	if (c1 != c2)
		return (c1 - c2);
	return (0);
}


int	ft_strncmp (const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

