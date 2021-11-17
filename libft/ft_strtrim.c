#include "libft.h"

int	ft_charisinstr(char c, char const *str);

char *ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	while(ft_charisinstr(s1[i], set) == 1)
		i++;	
	j = ft_strlen(s1) - 1;
	while (ft_charisinstr(s1[j], set) == 1)
		j--;
	l = j - i;
	k = 0;
	s = malloc(l);
	while (s1 && i <= j)
	{
		s[k] = s1[i];
		k++;
		i++;
	}
	s[k] = '\0';
	return (s);
}

int	ft_charisinstr(char c, char const *str)
{
	int	i;

	i = 0;
	while(str)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
