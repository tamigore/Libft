/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:32:44 by tamigore          #+#    #+#             */
/*   Updated: 2019/11/06 15:05:35 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i = 0;
	unsigned char	*uc_dst = (unsigned char *)dst;
	unsigned char	*uc_src = (unsigned char *)src;

	if (c < 0 || c > 255)
		return (NULL);
	while (i < n)
	{
		(uc_dst[i] = uc_src[i]);
		if ((unsigned char)uc_src[i] == (unsigned char)c)
			return ((void *)&uc_dst[i + 1]);
		i++;
	}
	return (NULL);
}
