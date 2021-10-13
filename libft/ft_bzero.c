#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
	((unsigned char *) s)[i] = '\0';
	i++;
	}
}

/*
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}
 */


/*
int	main()
{
	char	str[] = "ioeoyvbwovuebw"; 
	ft_bzero(str, 3); 
	printf("%s", str);	
}
*/
