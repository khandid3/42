#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*buf;

	buf = b;
	i = 0;
	while (i < len)
	{
		buf[i] = c;
		i++;
	}
	return (buf);
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
