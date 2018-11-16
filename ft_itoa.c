/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:05:26 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/16 11:27:29 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_unit(unsigned int nb)
{
	int unit;

	unit = 0;
	if (nb == 0)
		unit++;
	while (nb > 0)
	{
		nb /= 10;
		unit++;
	}
	return (unit);
}

static	char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
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
	unit = ft_unit(nb);
	if (!(p = (char *)malloc(unit + 1 + NEG(n))))
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
