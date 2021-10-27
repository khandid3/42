#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*dstbis;
	unsigned char	*srcbis;

	i = 0;
	dstbis = ((unsigned char *)dst);
	srcbis = ((unsigned char *)src);
	while ((i < len) && (srcbis[i] != '\0'))
	{
	dstbis[i] = srcbis[i];
	i++;
	}	
	while (dstbis[i] != '\0')
	{
	dstbis[i] = dstbis[i];
	i++;
	}
	dstbis[i] = '\0';
	return (dstbis);
}

int	main()
{
	char	src[] = "maison";
	char	dst[] = "appartement";
	char	dst2[] = "appartement";
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s", memmove(dst2, src, 5));
}
