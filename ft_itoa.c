/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:05:26 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/14 18:29:22 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_unit(char *p, int nb, int n)
{
	int temp;
	int unit;

	temp = 1;
	unit = 0;
	while (temp <= nb)
	{
		temp *= 10;
		unit++;
	}
	if (nb == 0)
	{
		if (!(p = (char *)malloc(2)))
			return (-1);
		p[0] = '0';
		p[1] = '\0';
		return (0);
	}
	if (n < 0)
		unit++;
	return (unit);
}

static	char	*ft_strrev(char *s)
	}
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i <= j)
	{
		c = s[i];
		s[i++] = s[j];
		s[j--] = c;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char			*p;
	int				unit;
	unsigned int	nb;
	int				i;

	i = 0;
	if (n < 0)
		nb = -n;
	else
		nb = n;
	if ((unit = ft_unit(p, nb, n)) == 0)
		return (p);
	if (!(p = (char *)malloc(unit + 1)))
		return (NULL);
	while (unit > 0)
	{
		p[i++] = nb % 10 + '0';
		nb /= 10;
		unit--;
	}
	if (n < 0)
		p[i++] = '-';
	p[i] = '\0';
	p = ft_strrev(p);
	return (p);
}
/*
**int main()
**{
**	printf("%s", ft_itoa(-123456));
**	return (0);
**}
*/
