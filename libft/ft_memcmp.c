#include "libft.h"

// a linverse de strcmp, memcmp ne sarrete pas au '\0', il va comparer, si necessaire,
// les n premiers bytes.

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (i < n)
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else (str1[i] < str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
