#include "libft.h"

static int	count_digit(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = count_digit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[i--] = 0;
	if (n == 0)
		str[i--] = '0';
	while (n)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
