/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:05:48 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/09 18:03:15 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] && dst[i] && j + i < (int) size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i);
}
