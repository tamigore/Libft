/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:51:10 by tamigore          #+#    #+#             */
/*   Updated: 2019/11/06 15:05:45 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s = (unsigned char *)s;
	size_t	i = 0;

	while (i < n)
	{
		if (uc_s[i] == (unsigned char)c)
			return ((void *)&uc_s[i]);
		i++;
	}
	return (NULL);
}
