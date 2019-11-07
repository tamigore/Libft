/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_rmchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:39:00 by tamigore          #+#    #+#             */
/*   Updated: 2019/11/06 15:03:08 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_free_rmchar(char *str, char c)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i + j])
	{
		if (str[i + j] == c)
			j++;
		i++;
	}
	if (!(new = ft_strnew(i)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
			new[j++] = str[i++];
	}
	free(str);
	return (new);
}
