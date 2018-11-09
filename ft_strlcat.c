/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:05:48 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/09 19:24:44 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int n;

	i = ft_strlen(dst);
	n = i;
	j = 0;
	if (src[0] == '\0')
		return (i);
	while (src[j] && i < (int) size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (n + j);
}
