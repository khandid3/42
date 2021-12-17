#include "libft.h"

size_t ft_strlcat(char *dst, const  char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(dst);
	if (l >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && (l < dstsize - 1))
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (l - i + ft_strlen(src));
}
