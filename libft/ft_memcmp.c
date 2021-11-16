#include "libft.h"

// a linverse de strcmp, memcmp ne sarrete pas au '\0', il va comparer, si necessaire,
// les n premiers bytes.

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	unsigned char *temp1;
	unsigned char *temp2;

	i = 0;
	temp1 = (unsigned char *)str1;
	temp2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (temp1[i] == temp2[i])
		{
			i++;
		}
		else
			return (temp1[i] - temp2[i]);
	}
	return (0);
}
