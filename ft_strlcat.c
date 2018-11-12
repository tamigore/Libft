/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:05:48 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/12 16:06:52 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	j = 0;
	i = (int)len_dst;
	if (src[0] == '\0')
		return (len_dst);
	while (dst[i] && src[j] && j + len_dst < (int)size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
