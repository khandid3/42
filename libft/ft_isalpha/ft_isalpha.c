#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 101 && c <= 172)
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_isalpha('k'));
}
*/
