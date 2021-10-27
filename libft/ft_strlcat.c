#include "libft.h"

size_t ft_strlcat(char *restrict dst, const  char *restrict src, size_t dstsize)
{
	int l;
	int	i;

	i = 0;
	l = ft_strlen(dst);
	while (src[i] && (ft_strlen(dst) + ft_strlen(src)) < dstsize)
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (l + ft_strlen(src));
}
