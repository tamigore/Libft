/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:54:06 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/14 17:21:52 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*p;

	i = 0;
	if (!(p = (char *)malloc(len + 1)))
		return (NULL);
	while (start < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
