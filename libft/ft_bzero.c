#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
 
/*
int	main()
{
	char	str[] = "ioeoyvbwovuebw"; 
	ft_bzero(str, 3); 
	printf("%s", str);	
}
*/
