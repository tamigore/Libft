#include "libft.h"

void	ft_strdel(char **as)
{
	int i;

	i = 0;
	while (as[i])
		free(as[i++]);
	as = NULL;
}
