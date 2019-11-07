/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:47:34 by tamigore          #+#    #+#             */
/*   Updated: 2019/11/06 15:03:39 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!(*alst))
		*alst = new;
	else
	{
		while ((*alst)->next)
			*alst = (*alst)->next;
		(*alst)->next = new;
	}
}
