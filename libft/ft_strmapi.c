#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*resultat;

	i = 0;
	if (!s || !f)
		return (NULL);
	resultat = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (resultat == NULL)
		return (NULL);
	while (s[i])
	{
		resultat[i] = f(i, s[i]);
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
