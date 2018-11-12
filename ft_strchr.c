/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:15:10 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/12 13:21:25 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*p;

	j = 0;
	i = ft_strlen(s);
	while (j <= i)
	{
		if (s[j] == c)
		{
			p = (char *)&s[j];
			return (p);
		}
		j++;
	}
	return (NULL);
}
