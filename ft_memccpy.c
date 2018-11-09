/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:32:44 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/09 14:56:27 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (dst[i] && src[i] && i < n)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char) c)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
