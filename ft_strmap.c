#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;

	i = 0;
	while (s[i])
		f(s[i++]);
	return (s);
}
