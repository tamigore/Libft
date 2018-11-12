#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *) malloc(size)))
		return (NULL);
	while (i < (int) size)
		str[i++] = '\0';
	return (str);
}
