/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:55:38 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/12 13:12:41 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i <= (int)len)
	{
		if (haystack[i] == needle[j])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j <= (int)len)
			{
				if (needle[j + 1] == '\0')
				{
					p = (char *)&haystack[i];
					return (p);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
