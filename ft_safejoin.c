/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:21:25 by tamigore          #+#    #+#             */
/*   Updated: 2019/11/07 12:10:49 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_safejoin(char *s1, char *s2, int i)
{
	char	*str;

	if (!s1 || !s2 || !(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	if (i == 1 || i == 3)
		free(s1);
	else if (i == 2 || i == 3)
		free(s2);
	return (str);
}
