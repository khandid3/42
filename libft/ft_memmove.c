#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;

	buf = malloc(sizeof(char) * len);
	if (buf != NULL)
	{
		ft_memcpy(buf, src, len);
		ft_memcpy(dst, buf, len);
		free(buf);
	}
	return (dst);
}
/*
int	main()
{
	char	src[] = "maison";
	char	dst[] = "appartement";
	char	dst2[] = "appartement";
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s", memmove(dst2, src, 5));
}
*/
