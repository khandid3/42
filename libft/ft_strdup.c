#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *ptr;
	size_t i;
	
	i = 0;
	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
   return (ptr);	
}
