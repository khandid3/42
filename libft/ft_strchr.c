#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
