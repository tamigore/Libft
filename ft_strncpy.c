/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:58:52 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/09 16:51:06 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && dst[i] && i < (int) len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i != (int) len && dst[i])
		dst[i++] = '\0';
	return (dst);
}
