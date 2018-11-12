/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:24:20 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/12 16:03:55 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	int i;

	i = 0;
	while (as[i])
	{
		free(as[i]);
		as[i] = NULL;
		i++;
	}
	as = NULL;
}
