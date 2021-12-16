#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)str)[i] = c;
		i++;
	}
	return (str);
}

/*
int	main()
{
	char	str[] =  "ur	bb4294767942764";
	
	printf("%s", ft_memset(str, 50, 7));
}
*/

/*
ou sinon pour caster directement: ((unsigned char*)b)[i] = c; 
 */
