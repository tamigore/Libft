#include "libft.h"

void ft_putendl(char const *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
		ft_putchar(s[i++]);
	ft_putchar('\n');
}
