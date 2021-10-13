#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 30 && c <= 39)
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d", ft_isdigit(32));
}
*/
