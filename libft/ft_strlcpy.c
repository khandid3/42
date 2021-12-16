#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main()
{
	char	src[] = "cela est la source";
	char	dst[] = "ceci est la destination";
	char	src2[] = "cela est la source";
	char	dst2[] = "ceci est la destination";

	printf("%zu\n", ft_strlcpy(dst, src, 17));
	printf("%s\n", dst);
	printf("%d\n", (int)ft_strlcpy(dst2, src2, 17));
	printf("%s\n", dst2);
}
*/
